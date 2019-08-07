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

This project template contains the following options:

* `project_name` - The name of the module, should contain no spaces.
* `project_pretty_name` - Pretty project name that can contain spaces.
* `project_description` - Short description of the module - omitted if blank.
* `project_author` - Name of the module author.
* `project_version` - Version of the project.
* `project_website` - Website of the project - omitted if blank.
* `project_license` - License of the project.
* `project_dependencies` - List of other module dependencies.
* `project_cpp_standard` - Require C++ standard.
* `file_name` - Name of the created `.h` and `.cpp` files in the source directory.