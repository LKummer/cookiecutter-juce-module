/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.txt file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID: {{ cookiecutter.project_name }}
  vendor: {{ cookiecutter.project_author }}
  version: {{ cookiecutter.project_version }}
  name: {{ cookiecutter.project_pretty_name }}
{% if cookiecutter.project_description %}
  description: {{ cookiecutter.project_description }}
{% endif %}
{% if cookiecutter.project_website %}
  website: {{ cookiecutter.project_website }}
{% endif %}
  license: {{ cookiecutter.project_license }}

  dependencies: {{ cookiecutter.project_dependencies }}
  minimumCppStandard: {{ cookiecutter.project_cpp_standard }}

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/
#pragma once

// Include module headers:
#include "source/{{ cookiecutter.file_name }}.h";