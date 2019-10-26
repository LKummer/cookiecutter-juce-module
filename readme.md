# Juce Module Cookiecutter Template

A [Cookiecutter](https://cookiecutter.readthedocs.io/en/latest/index.html) template for creating Projucer modules for Juce module development.

## Using The Template:

This template can be used with Cookiecutter, a Python based project templating tool.

Assuming you have Python installed, you can get Cookiecutter through pip:

    pip install cookiecutter

Then run cookiecutter on this template:

    cookiecutter gh:lkummer/cookiecutter-juce-module

Once you answer all the prompts you should have a folder that can be added as a Juce module through Projucer.

## Template Options:

This template contains the following options:

* `module_name` - The name of the module, should contain no spaces.
* `module_pretty_name` - Pretty module name that can contain spaces.
* `module_description` - Short description of the module - omitted if blank.
* `module_author` - Name of the module author.
* `module_version` - Version of the module.
* `module_website` - Website of the module - omitted if blank.
* `module_license` - License of the module.
* `module_dependencies` - List of other module dependencies.
* `module_cpp_standard` - Required C++ standard.
* `file_name` - Name of the generated `.h` and `.cpp` files in the source directory.