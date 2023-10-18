#!/bin/cash
clflush="$1"
if [[ $clflush == "clflush" ]]; then
   echo $(grep -w $clflush /proc/cpuinfo | awk '{print $NF}')
else
   echo "Команда не найдена."
fi
if [[ $2 == "info" ]]; then
   echo -e "$clflush - це параметр, пов'язаний з кеш-пам'яттю процесора, який вказує розмір мінімального блоку даних, який може бути скинутий з кешу (очищений з кешу) за допомогою CLFLUSH інструкції."
fi
