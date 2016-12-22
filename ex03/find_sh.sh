find . -name "*.sh" | sed 's/.sh*$//' | awk -F"/" '{print $NF}'
