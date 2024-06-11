#!/bin/sh
set -e
echo "Entrypoint script is running"

sudo chown -R mwaheed:mwaheed /workspace



# Execute the CMD or any other command provided
exec "$@"
