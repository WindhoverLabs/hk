/* This file was autogenerated from template version 0.0.0.1 and autogenerator version {{cookiecutter.autogen_version}} */

#include "{{cookiecutter.app_name|lower}}_serialization.h"

#ifdef __cplusplus
extern "C" {
#endif
{# Iterate over every proto msg in json file  #}{% for airliner_msg, proto_data in cookiecutter.proto_msgs.iteritems() %}
uint32 {{airliner_msg}}_Enc(const {{airliner_msg}} *inObject, char *inOutBuffer, uint32 inSize)
{
	bool status = false;
	pb_ostream_t stream;

	{{ proto_data.proto_msg }} {{ proto_data.proto_msg[:-3] }}_msg;{%- set parent_msg = [airliner_msg] -%}{%- set parent_pb = [proto_data.proto_msg] -%}{# Iterate over required proto msgs for this proto msg #}{% for req_pb_msg, req_pb_data in proto_data.required_pb_msgs.iteritems() recursive %}{% for parent, temp in req_pb_data.parent_field.iteritems() recursive %}
	{{ req_pb_msg }} {{ req_pb_msg[:-3] }}_{{parent}}_msg;
{# Find correct association for required structs #}{# Check is sub message is in top level parent #}{% if airliner_msg == parent_msg[0] %}	{{ req_pb_data.airliner_msg }} {{parent}}_sub_message = inObject->{{ proto_data.fields[parent]["airliner_name"] }};{% else %}	{{ req_pb_data.airliner_msg }} {{parent}}_sub_message = {{ parent_msg[0] }}_sub_message.{{ parent }};{%- endif -%}{# Recur into next required message if present #}{%- do parent_msg.insert(0, req_pb_data.airliner_msg) -%}{%- do parent_pb.insert(0, req_pb_msg) -%}{%- if req_pb_data.required_pb_msgs|length > 0 -%}{{ loop(req_pb_data.required_pb_msgs.items())}}{%- endif -%}{% endfor -%}{% endfor -%}{%- set parent_msg = [airliner_msg] -%}{%- set parent_pb = [proto_data.proto_msg] -%}{%- set idx = [0] -%}
	{# Encode in proper order #}
	{% for req_pb_msg, req_pb_data in proto_data.required_pb_msgs.iteritems() recursive -%}
		{# Recur into next required message if present #}
		{%- if req_pb_data.required_pb_msgs|length > 0 -%}
			{%- do idx.append(idx.pop() + 1) -%}
			{%- do parent_msg.append(req_pb_data.airliner_msg) -%}
			{%- do parent_pb.append(req_pb_msg) -%}
			{{ loop(req_pb_data.required_pb_msgs.items()) }}
		{%- endif -%}
	{% for pb_var, var_data in req_pb_data.fields.iteritems() %}{% for parent, temp in req_pb_data.parent_field.iteritems() recursive %}{% if var_data.pb_type[-3:] == "_pb" %}{%- continue -%}{%- endif -%}{% if var_data.pb_field_rule == "repeated" %}
	{{ req_pb_msg[:-3] }}_{{parent}}_msg.{{pb_var}}_count = {{var_data.array_length}};{% for i in range(0, var_data.array_length | int) %}	{% if var_data.airliner_type == "char" %}strcpy({{ req_pb_msg[:-3] }}_{{parent}}_msg.{{pb_var}}[{{loop.index0}}], {{parent}}_sub_message.{{var_data.airliner_name}}[{{loop.index0}}]);{% else %}
	{{ req_pb_msg[:-3] }}_{{parent}}_msg.{{pb_var}}[{{loop.index0}}] = {{parent}}_sub_message.{{var_data.airliner_name}}[{{loop.index0}}];{%- endif -%}{%- endfor -%}{% else %}{% if var_data.airliner_type == "char" %}
	strcpy({{ req_pb_msg[:-3] }}_{{parent}}_msg.{{pb_var}}, {{parent}}_sub_message.{{var_data.airliner_name}});{% else %}
	{{ req_pb_msg[:-3] }}_{{parent}}_msg.{{pb_var}} = {{parent}}_sub_message.{{var_data.airliner_name}};{%- endif -%}{%- endif -%}

	/* Create a stream that will write to our buffer. */
	stream = pb_ostream_from_buffer((pb_byte_t *)&{{parent}}_sub_message, inSize);
	
	/* Now we are ready to encode the message. */
	status = pb_encode(&stream, {{req_pb_msg}}_fields, &{{ req_pb_msg[:-3] }}_{{parent}}_msg);

	/* Check for errors... */
	if (!status)
	{
		return 0;
	}

	{{ parent_pb[idx[0]][:-3] }}_msg.{{ parent }} = {{ req_pb_msg[:-3] }}_{{parent}}_msg;
	{% endfor %}{%- do idx.append(idx.pop() - 1) -%}{% endfor %}
	{% for pb_var, var_data in proto_data.fields.iteritems() %}{% if var_data.pb_type[-3:] == "_pb" %}{%- continue -%}{%- endif -%}{% if var_data.pb_field_rule == "repeated" %}
	{{ proto_data.proto_msg[:-3] }}_msg.{{pb_var}}_count = {{var_data.array_length}};{% for i in range(0, var_data.array_length | int) %}
	{% if var_data.airliner_type == "char" %}strcpy({{ proto_data.proto_msg[:-3] }}_msg.{{pb_var}}[{{loop.index0}}], inObject->{{var_data.airliner_name}}[{{loop.index0}}]);{% else %}{{ proto_data.proto_msg[:-3] }}_msg.{{pb_var}}[{{loop.index0}}] = inObject->{{var_data.airliner_name}}[{{loop.index0}}];{%- endif -%}{%- endfor -%}{%- else %}{% if var_data.airliner_type == "char" %}strcpy({{ proto_data.proto_msg[:-3] }}_msg.{{pb_var}}, inObject->{{var_data.airliner_name}});{% else %}{{ proto_data.proto_msg[:-3] }}_msg.{{pb_var}} = inObject->{{var_data.airliner_name}};{%- endif -%}{%- endif -%}{% endfor %}{% endfor %}
	/* Create a stream that will write to our buffer. */
	stream = pb_ostream_from_buffer((pb_byte_t *)inOutBuffer, inSize);
	
	/* Now we are ready to encode the message. */
	status = pb_encode(&stream, {{proto_data.proto_msg}}_fields, &{{ proto_data.proto_msg[:-3] }}_msg);

	/* Check for errors... */
	if (!status)
	{
		return 0;
	}

	return stream.bytes_written;
}

uint32 {{airliner_msg}}_Dec(const char *inBuffer, uint32 inSize, {{airliner_msg}} *inOutObject)
{
	bool status = false;
	pb_istream_t stream;

	{{ proto_data.proto_msg }} {{ proto_data.proto_msg[:-3] }}_msg;

	{%- set parent_msg = [airliner_msg] -%}
	{%- set parent_pb = [proto_data.proto_msg] -%}

	{# Iterate over required proto msgs for this proto msg #}{% for req_pb_msg, req_pb_data in proto_data.required_pb_msgs.iteritems() recursive %}{% for parent, temp in req_pb_data.parent_field.iteritems() recursive %}
	{{ req_pb_msg }} {{ req_pb_msg[:-3] }}_{{parent}}_msg;
	{{ req_pb_data.airliner_msg }} *{{parent}}_sub_message;
		{# Recur into next required message if present #}
		{%- do parent_msg.insert(0, req_pb_data.airliner_msg) -%}
		{%- do parent_pb.insert(0, req_pb_msg) -%}
		{%- if req_pb_data.required_pb_msgs|length > 0 -%}
			{{ loop(req_pb_data.required_pb_msgs.items())}}
		{%- endif -%}
	{% endfor %}{% endfor %}
	/* Create a stream that reads from the buffer. */
	stream = pb_istream_from_buffer((const pb_byte_t *)inBuffer, inSize);

	/* Now we are ready to decode the message. */
	status = pb_decode(&stream, {{proto_data.proto_msg}}_fields, &{{ proto_data.proto_msg[:-3] }}_msg); 

	/* Check for errors... */
	if (!status)
	{
		return 0;
	}
	{# Set top level attrs after intial decode #}{% for pb_var, var_data in proto_data.fields.iteritems() %}{% if var_data.pb_type[-3:] == "_pb" %}{%- continue -%}{%- endif -%}{% if var_data.pb_field_rule == "repeated" %}{% for i in range(0, var_data.array_length | int) %}{% if var_data.airliner_type == "char" %}strcpy(inOutObject->{{var_data.airliner_name}}[{{loop.index0}}], {{ proto_data.proto_msg[:-3] }}_msg.{{pb_var}}[{{loop.index0}}]);{% else %}inOutObject->{{var_data.airliner_name}}[{{loop.index0}}] = {{ proto_data.proto_msg[:-3] }}_msg.{{pb_var}}[{{loop.index0}}];{%- endif -%}{%- endfor -%}{%- else %}{% if var_data.airliner_type == "char" %}strcpy(inOutObject->{{var_data.airliner_name}}, {{ proto_data.proto_msg[:-3] }}_msg.{{pb_var}});{% else %}inOutObject->{{var_data.airliner_name}} = {{ proto_data.proto_msg[:-3] }}_msg.{{pb_var}};{%- endif -%}{%- endif -%}{% endfor %}{# Set child data types #}{% for pb_var, var_data in proto_data.required_pb_msgs.iteritems() %}{% for parent, temp in var_data.parent_field.iteritems() %}
	{{var_data.airliner_msg}}_sub_message = &inOutObject->{{proto_data.fields[parent]["airliner_name"]}};
{% endfor %}{% endfor %}{%- set parent_msg = [airliner_msg] -%}{%- set parent_pb = [proto_data.proto_msg] -%}{# Encode in proper order #}{% for req_pb_msg, req_pb_data in proto_data.required_pb_msgs.iteritems() recursive %}{% for parent, temp in req_pb_data.parent_field.iteritems()  recursive %}

	/* Create a stream that reads from the buffer. */
	stream = pb_istream_from_buffer((const pb_byte_t *){{parent}}_sub_message, inSize);

	/* Now we are ready to decode the message. */
	status = pb_decode(&stream, {{req_pb_msg}}_fields, &{{ req_pb_msg[:-3] }}_{{parent}}_msg);

	/* Check for errors... */
	if (!status)
	{
		return 0;
	}
	{% for pb_var, var_data in req_pb_data.fields.iteritems() %}{% if var_data.pb_field_rule == "repeated" %}{% for i in range(0, var_data.array_length | int) %}
	{% if var_data.airliner_type == "char" %}strcpy({{parent}}_sub_message->{{var_data.airliner_name}}[{{loop.index0}}], {{ req_pb_msg[:-3] }}_{{parent}}_msg.{{pb_var}}[{{loop.index0}}]);{% else %}{{parent}}_sub_message->{{var_data.airliner_name}}[{{loop.index0}}] = {{ req_pb_msg[:-3] }}_{{parent}}_msg.{{pb_var}}[{{loop.index0}}];
	{%- endif -%}
	{%- endfor -%}
	{%- else %}
	{% if var_data.airliner_type == "char" %}strcpy({{parent}}_sub_message->{{var_data.airliner_name}}, {{ req_pb_msg[:-3] }}_{{parent}}_msg.{{pb_var}});{% elif var_data.pb_type[-3:] == "_pb" %}{{ var_data.airliner_type }}_sub_message = &{{parent}}_sub_message->{{ var_data.airliner_name }};{% else %}{{parent}}_sub_message->{{var_data.airliner_name}} = {{ req_pb_msg[:-3] }}_{{parent}}_msg.{{pb_var}};{%- endif -%}{%- endif -%}{% endfor %}{# Recur into next required message if present #}{%- do parent_msg.insert(0, req_pb_data.airliner_msg) -%}{%- do parent_pb.insert(0, req_pb_msg) -%}{%- if req_pb_data.required_pb_msgs|length > 0 -%}{{ loop(req_pb_data.required_pb_msgs.items())}}{%- endif -%}{% endfor %}{% endfor %}

	return sizeof({{airliner_msg}});
}
{% endfor %}
#ifdef __cplusplus
} /* extern "C" */
#endif
