/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.txt file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID: {{ cookiecutter.module_name }}
  vendor: {{ cookiecutter.module_author }}
  version: {{ cookiecutter.module_version }}
  name: {{ cookiecutter.module_pretty_name }}
{% if cookiecutter.module_description %}
  description: {{ cookiecutter.module_description }}
{% endif %}
{% if cookiecutter.module_website %}
  website: {{ cookiecutter.module_website }}
{% endif %}
  license: {{ cookiecutter.module_license }}

  dependencies: {{ cookiecutter.module_dependencies }}
  minimumCppStandard: {{ cookiecutter.module_cpp_standard }}

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/
#pragma once

// Include module headers:
#include "source/{{ cookiecutter.file_name }}.h"