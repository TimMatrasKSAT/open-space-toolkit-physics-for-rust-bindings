#!/bin/bash

################################################################################################################################################################

# @project        Library/Physics
# @file           tools/python/exec.sh
# @author         Lucas Brémond <lucas@loftorbital.com>
# @license        Apache License 2.0

################################################################################################################################################################

script_directory="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Setup environment

source "${script_directory}/../.env"

# Exec Docker container

docker exec \
-it \
"${python_container_name}" \
/bin/bash

################################################################################################################################################################