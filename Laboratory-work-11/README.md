## Етапи компіляції С-програм та автоматизація побудови С-програм

### 1 Побудова програми з’єднання з СКБД PostgreSQL на основі монолітної С-програми

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/32d3edb1-7a3e-4e67-be68-d8fb9ff424a5)

Рис. 1 Фрагмент рішення екрану "2.1.1 Створити C-програму з назвою «db_connect.c», яка:
- встановлює з'єднання із СКБД PostgreSQL;
- під час з’єднання використовує назву БД та користувача з попередньої лабораторної роботи, які вбудовані в програмний код;
- обробляє результат з’єднання (успішно та помилкове), виводячі на екран відповідні повідомлення, які враховують назву БД;
- увесь програмний код розміщується лише у функції main."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/42435b6d-1579-403d-b0a7-917ad300679d)

Рис. 2 Фрагмент рішення екрану "2.1.2 Скомпілювати С-програму, враховуючи каталоги з header-файлами та бібліотеками СКБД PostgreSQL. Перевірити роботу executable-файла."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/97794e9f-8c25-415d-975b-d0470a5239cb)

Рис. 3 Фрагмент рішення екрану "2.1.3 Створити C-програму з назвою «db_connect_param.c», яка повторює всі дії C-програми з назвою «db_connect.c», але назву бази даних та ім’я користувача програма повинна брати як параметри командного рядку."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/bb015a30-b8ff-43a4-8b1d-38bd16f7f3e3)

Рис. 4 Фрагмент рішення екрану "2.1.4 Скомпілювати С-програму, враховуючи каталоги з header-файлами та бібліотеками СКБД PostgreSQL. Перевірити роботу executable-файла за двома варіантами назви БД: правильна назва та будь-яка неправильна БД."

### 2 Побудова програми з’єднання з СКБД PostgreSQL за модульним принципом програмування

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/0a468a1e-909a-4d51-8ad9-2bba3c10486f)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/92c95667-4d97-46cf-9411-e7c487e6ccc1)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/c51ebac5-50a0-45bf-9a71-1af9b34fb9ff)

Рис. 5 Фрагмент рішення екрану "2.2.1 Змінити код С-програми, враховуючи модульний принцип програмування:
- оформити програмний код з’єднання із СКБД PostgreSQL у вигляді функції з назвою «connect_назва таблиці», де «назва таблиці» - назва реляційної таблиці з попередньої лабораторної работи;
- розмістити функцію у С-файлі із такою ж назвою, як назва функції;
- створити header-файл за шаблоном «назва таблиці.h» та додати до файлу декларацію створеної функції;
- виконати виклик функції із main-функції файлу з назвою «назва таблиці.c»"

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/67e87bd6-3ca4-4244-b99d-fb1fdd4a9f90)

Рис. 6 Фрагмент рішення екрану "2.1.2 Скомпілювати С-програму, враховуючи каталоги з header файлами, бібліотеками СКБД PostgreSQL та модульність програми. Перевірити роботу executable-файла."

### 3 Побудова програми з’єднання з СКБД PostgreSQL через команду make

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/40676fee-bea9-4406-a02b-10ef7117609b)

Рис. 7 Фрагмент рішення екрану "2.3.1 Створити Makefile, який містить наступний опис мети:
- мета компіляції програми з назвою «назва таблиці.c»
- мета компіляції файлу з функцією."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/7631c87d-be69-4c42-a9b3-2148b0528696)

Рис. 8 Фрагмент рішення екрану "2.1.2 Скомпілювати С-файли програмних модулів командою make."

### 4 Побудова програми видалення рядку реляційної таблиці

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/b790c8a9-fea7-4315-b6c7-d5d9e33a490b)

Рис. 9 Фрагмент рішення екрану "2.4.1 Створити файл як програмний модуль з назвою «remove_назва таблиці.с» із описом функції видалення рядку реляційної таблиці, яка повинна містити:
- команди транзакції (START TRANSACTION, LOCK TABLE назва таблиці ..., DELETE FROM назва таблиці ..., COMMIT);
- повідомлення про результат виконання кожної команди.
Команду DELETE FROM створити за прикладом з попередньої лабораторної роботи."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/680bff0f-ac4a-419f-83b7-21246f2fcbeb)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/16f16e90-caa4-46f8-a53b-6b78873a90d8)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/d1d8eff6-8f2e-4f4c-badb-e25b2328dcd3)

Рис. 10 Фрагмент рішення екрану "2.4.2 Оновити раніше створені файли:
- додати до файлу «назва таблиці».h декларацію нової функції;
- виконати виклик нової функції із main-фукції файлу «назва таблиці».c
- додати опис нової мети у файл Makefile"

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/648268b7-a9f9-484e-8625-8684a6d350f1)

Рис. 11 Фрагмент рішення екрану "2.4.3 Скомпілювати С-файли програмних модулів командою make. Перевірити роботу executable-файла."

### 5 Побудова програми додавання рядку реляційної таблиці

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/3e8dfec6-7dca-45bc-9679-0bea21d8ede1)

Рис. 12 Фрагмент рішення екрану "2.5.1 Створити файл як програмний модуль з назвою «add_назва таблиці.с» із описом функції додавання рядку реляційної таблиці, яка повинна містити:
- команди транзакції (START TRANSACTION, LOCK TABLE назва таблиці ..., INSERT INTO назва таблиці ..., COMMIT);
- повідомлення про результат виконання кожної команди.
Команду INSERT INTO створити за прикладом з попередньої лабораторної роботи."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/faab8d55-9971-4d0e-ab21-55866e1c1a23)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/af6d9222-26c1-4607-b02f-2c09ee417c91)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/93a5f3c8-ae5f-492f-8fd3-45d0f9d06d2a)

Рис. 13 Фрагмент рішення екрану "2.5.2 Оновити раніше створені файли:
- додати до файлу «назва таблиці.h» декларацію нової функції;
- виконати виклик нової функції із main-фукції файлу «назва таблиці.c»
- додати опис нової мети у файл Makefile"

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/2acb0ded-2f7a-493d-b3fa-9ff14302053d)

Рис. 14 Фрагмент рішення екрану "2.5.3 Скомпілювати С-файли програмних модулів командою make."

### 6 Побудова програми перегляду рядків реляційної таблиці

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/e50327b4-dbeb-4d6b-82b2-1015df9bb0e5)

Рис. 15 Фрагмент рішення екрану "2.6.1 Створити файл як програмний модуль з назвою «get_назва таблиці».с із описом функції перегляду рядків реляційної таблиці, яка повинна містити:
- команди транзакції (START TRANSACTION, LOCK TABLE назва таблиці ..., SELECT ... FROM назва таблиці ..., COMMIT);
- повідомлення про результат виконання кожної команди.
Команду SELECT ... FROM створити за прикладом з попередньої лабораторної роботи."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/26fbb418-8aa0-4c52-b6b1-848d63672e71)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/d1ff29d9-4759-437c-8e56-2de61e15cb8f)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/6b5a852a-9840-4bf4-88ef-a202b4c6097f)

Рис. 16 Фрагмент рішення екрану "2.6.2 Оновити раніше створені файли:
- додати до файлу «назва таблиці».h декларацію нової функції;
- виконати виклик нової функції із main-фукції файлу «назва таблиці».c
- додати опис нової мети у файл Makefile"

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/64561905-0580-4097-98bd-d10c6bfa12fd)

Рис. 17 Фрагмент рішення екрану "2.6.3 Скомпілювати С-файли програмних модулів командою make. Перевірити роботу executable-файла."

### 7 Додаткове налаштування процесу керування файлами через команду make

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/4ee06774-7f0a-46e9-92fc-424135734d5f)

Рис. 18 Фрагмент рішення екрану "2.7.1 Додати до файлу Makefile наступні описи мети: 
install – копіювання executable-файлу до каталогу /home/ваш_користувач/bin (попередньо створити такий каталог);
clean – очистка всіх object-файлів та executable-файлу."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/1a09f78d-8853-4542-a906-1740666e3663)

Рис. 19 Фрагмент рішення екрану "2.7.2 Виконати команду make з метою clean. Перевірити відсутність всіх object-файлів та executable-файлу."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/5961d00c-7086-4b28-9d81-b37e7d6378d1)

Рис. 20 Фрагмент рішення екрану "2.7.3 Скомпілювати С-файли програмних модулів командою make."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/49ff0803-720e-4073-bf99-e8649e517837)

Рис. 21 Фрагмент рішення екрану "2.7.4 Виконати команду make з метою install. Перевірити роботу executable-файла без необхідності вказувати до нього шлях доступу."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/a6f74169-f74d-4f61-a8a7-6b69aa12d25f)

Рис. 22 Фрагмент рішення екрану "2.7.5 Повторно скомпілювати С-файли програмних модулів командою make. Надати висновки щодо повідомлення команди."

Повідомлення "make: 'calculator' is up to date" означає, що файл виконуваного програми з назвою "calculator" вже знаходиться в актуальному стані і не потребує повторної компіляції. Це означає, що жоден з вихідних файлів програмних модулів або їх залежностей не був змінений після останньої компіляції.

### 8 Огляд етапів побудови С-програми GNU-компілятором GCC

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/06bb87bc-4315-4190-a221-7f7480e013db)

Рис. 23 Фрагмент рішення екрану "2.8.1 Виконати prepocessing-етап для вказаного файлу, зберігши результат у файлі «назва таблиці.i»"

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/0c0a90e2-ea4c-4e77-b38f-2c0232f76ccb)

Рис. 24 Фрагмент рішення екрану "2.8.2 Виконати compilation-етап для файлу «назва таблиці.i», зберігши результат у файлі «назва таблиці.s»"

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/ef74af06-493c-480d-9f4a-de251fec62c5)

Рис. 25 Фрагмент рішення екрану "2.8.3 Повторити compilation-етап для файлу «назва таблиці.i» з оптимізацію програмного коду, зберігши результат у файлі «назва таблиці_opt.s», та визначити відсоток зменшення кількості рядків після оптимізації."

З 94 до 86 рядків, або 8.51%.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/a3b282de-9f63-4655-9301-4d863d35c366)

Рис. 26 Фрагмент рішення екрану "2.8.4 Виконати assembly-етап для файлу «назва таблиці.i», зберігши результат у файлі «назва таблиці.o»"

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/65644a90-a945-4ce0-b63f-37bfd54b14bb)

Рис. 27 Фрагмент рішення екрану "2.8.5 Визначити командний рядок виконання linking-етапу для файлу «назва таблиці.o» та зберегти результат у файл-скрипті ld.sh"

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/7e84dc41-1f12-48c7-851f-0d89f1e5ef08)

Рис. 28 Фрагмент рішення екрану "2.8.6 Виконати linking-етап через виконання створеного раніше файл-скрипту ld.sh."

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/c0e1d136-07fe-4151-a743-a30bf3cfc27c)

Рис. 29 Фрагмент рішення екрану "2.8.7 Переглянути список файлів динамічних бібліотек, пов’язаних зі створеним executable-файлом."
