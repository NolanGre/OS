#!/bin/cash
echo -n "Введіть назву каталогу для видалення:"
read objectname
if [[ $objectname =~ [0-9]{6,} ]] || [[ ${#objectname} -gt 9 ]]; then 
    echo "Назва каталогу не відповідає вказаному обмеженню"
    exit 1
fi
if [[ -d "$objectname" ]]; then
    rm "$objectname"
    echo "Каталог \"$objectname\" успішно видалений"
else
    echo "Такого каталогу не існує"
fi
