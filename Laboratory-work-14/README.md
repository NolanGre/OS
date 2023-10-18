## Основи керування віртуальними ОС

### 1 Створення віртуальної машини через графічний інтерфейс

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/4cfb2fa2-8131-4511-87a1-0407e535f7ff)

2.1.3 Створити віртуальну машину, використовуючи графічний інтерфейс та враховуючи наступні значення параметрів:
- назва = «Linux of Surname», де Surname – ваше прізвище транслітерацією, наприклад «Linux of Blazhko»;
- файл ISO-образу = ubuntu-14.04.6-server-i386.iso;
- розмір оперативної пам’яті (Мб) = 10 * group + var, де group – номер вашої групи, var – номер вашого варіанту, наприклад, 10 * 221 + 5 = 2215 Мб;
- кількість ядер процесору = 1;
- розмір жорсткого диску (Мб) = 40 * group, наприклад, 40 * 221 = 8840 Мб = 8,84 Гб;
- правило Port Forwarding на першу мережеву карту, яке буде перенаправляти

мережеві пакети для з’єднання через SSH-протокол із guest-ОС (IP-address=10.0.2.15, SSH-
port=22) на IP-адресу=127.0.0.1 з використанням SSH-port=1234.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/6d2afc03-48fd-4694-8c83-d2e6faced4e5)

Запустити віртуальну машину, створену у пункті 2.1.3, та виконати інсталяцію віртуальної ОС, враховуючи параметри:
- hostname = os-surname, наприклад, os-blazhko;
- user account = surname, наприклад, blazhko;
- time zone = Kiev;
- Software = OpenSSH server;

2.1.5 Після інсталяції та перезапуску віртуальної машини виконати вхід до віртуальної ОС, використовуючи створений обліковий запис.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/c004fd4f-ccad-4e94-b2e2-3e4aa3ede6be)

2.1.6 Повторити вхід до віртуальної машини через SSH-протокол.


### 2.2 Створення віртуальної машини через інтерфейс командного рядку

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/260b5814-c4b7-4f85-8fc8-94537b24fca0)
![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/3f028391-10c8-4f1b-b514-33fd954176f2)
![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/13b87df8-eb0f-4cd5-907f-1a53b694a374)

2.2.1 Створити віртуальну машину, використовуючи інтерфейс командного рядку та враховуючи наступні значення параметрів:
- назва = «Linux of Surname 2», де Surname – ваше прізвище транслітерацією, наприклад «Linux of Blazhko»;
- файл ISO-образу = ubuntu-14.04.6-server-i386.iso;
- розмір оперативної пам’яті (Мб) = 10 * group + var, де group – номер вашої групи, var – номер вашого варіанту, наприклад, 10 * 221 + 5 = 2215 Мб;
- кількість ядер процесору = 1;
- розмір оперативної пам’яті графічної карти (Мб) = 100 + group2, останні дві цифри номеру групи, наприклад, 100 + 21 = 121 Мб;
- перша мережева карта з конфігурацією NAT;
- правило Port Forwarding на першу мережеву карту, яке буде перенаправляти мережеві пакети для з’єднання через SSH-протокол із guest-ОС (IP-address=10.0.2.15, SSH- port=22) на IP-адресу=127.0.0.1 з використанням SSH-port=1234;
- контролер IntelAHCI з інтерфейсом sata-типу за назвою SurnameSATA, Surname – ваше прізвище транслітерацією, наприклад «BlazhkoSATA»;
- контролер PIIX4 з інтерфейсом ide-типу за назвою SurnameIDE, де Surname – ваше прізвище транслітерацією, наприклад «BlazhkoIDE»;
- віртуальне сховище даних, розміщене у файлі з назвою DiskSurname.vdi, наприклад, DiskBlazhko.vdi, та розміром (Мб) = 40 * group, наприклад, 40 * 221 = 8840 Мб;

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/59a91868-561c-4fd4-bd97-58e4923f5b0c)

2.2.2 Запустити віртуальну машину, створену у пункті 2.2.1, використовуючи інтерфейс командного рядку.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/03578c08-2c1e-4e77-a085-cac378926aff)

2.2.3 Перебуваючи на першому екрані процесу інсталяції віртуальної ОС, призупинитироботу віртуальної машини.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/f3944a4a-4f18-40bf-bb1b-048313ded118)

2.2.4 Повторно запустити призупинену віртуальну машину, створену у пункті 2.2.1.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/3beaff87-b9ab-4313-96dd-0940f2c6b2e2)

2.2.5 Зупинити віртуальну машину, створену у пункті 2.2.1.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/531e9ef6-cf97-4a66-a0f3-3d6b5b0305c6)

2.2.6 Зняти з реєстрації віртуальну машину та видалити всі пов’язані з нею файли.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/5eebb30f-aee0-44ba-a09a-7359e3d359eb)

2.2.7 Зберегти всі команди керування віртуальною машиною, які було виконано у попередніх пунктах, у файлі CreateVMSurname.sh, де Surname – ваше прізвище транслітерацією, наприклад «CreateVMBlazhko.sh»;

### 3 Створення групи користувача та облікового запису користувача ОС Linux

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/646cfd1a-1533-4b36-919e-3fdf26d9c576)

2.3.1 Встановити з’єднання із віртуальною машиною, яка створена у розділі 2.1., через SSH-команду.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/35697535-c29d-4f41-b4ba-6d573814ac14)

2.3.2 Створити групу користувача, назва якої співпадає з назвою вашої студентської групи транслітерацією, наприклад, AI211;

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/46721b28-af6c-4ad2-b529-74a701539828)

2.3.3 З використанням не інтерактивної команди створити обліковий запис користувача з урахуванням того, що:
- ім'я користувача співпадає з об’єднаними вашим прізвищем та іменем транслітерацією, наприклад, blazhko_oleksandr;
- каталог користувача співпадає з вашим ім’ям;
- шлях до оболонки командного рядка = /bin/bash
- користувач входить до раніше створеної групи.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/ed283f22-c9e9-4e8e-a81b-cd4588caac18)

2.3.4 В окремому псевдотерміналі увійти з’єднатися з віртуальною машиною під іменем створеного користувача. Вийти із псевдотерміналу.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/356f3d97-df46-4417-bebf-052e59880aba)

2.3.5 Видалити створений обліковий запис користувача.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/c3b59437-4335-4d33-99a3-fba584b6aed0)

2.3.6 Видалити створену групу.

### Встановлення СКБД PostgrеSQL та налаштування роботи

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/3756ae2e-188d-471c-a83f-3ae42cda8731)

2.4.1 Використовуючи команду керування програмними пакунками, наприклад, apt, встановити програмний пакунок СКБД PostgrеSQL

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/e51d8e89-9af0-48f0-a214-3b573b1bb866)

2.4.2 Від імені користувача postgres створити БД Surname, де Surname – ваше прізвище транслітерацією.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/3b0c7e9b-9e09-434c-aea1-1018ad5daa33)

2.4.3 Від імені користувача postgres створити користувача СКБД з іменем Surname, де Surname – ваше прізвище транслітерацією.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/53eebb1f-0f2b-4d5f-8dd0-81fff237cfc8)

2.4.4 З’єднатися з СКБД PostgrеSQL, використовуючи створеного користувача та БД.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/4129fef2-fd63-4108-9aa0-ff7b629a2a54)

2.4.5 Від імені користувача postgres зупинити сервер СКБД.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/b64db89e-be85-486e-964f-d1c124bfc68a)

2.4.6 Видалити програмний пакунок СКБД PostgrеSQL.

### 5 Встановлення останньої верcії СКБД PostgreSQL із сирцевих кодів

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/4261107d-d16e-441f-8795-b9e8614560c9)

2.5.1 Встановити програмні пакунки, від яких залежить побудова СКБД PostgreSQL версії 15.3 із сирцевих кодів

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/0cc0ec12-b1d7-4d0e-a4ad-a1c356d1b564)

2.5.2 Виконати процес побудови СКБД PostgreSQL версії 15.3 із сирцевих кодів та виконати інсталяцію програм серверу.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/35e32776-ed28-4c31-845f-1abe320aa22e)

2.5.3 Запустити сервер СКБД PostgreSQL версії 15.3.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/8a77e5f1-134c-4bf7-9406-0a006d7242b6)

2.5.4 Перевірити з’єднання програми-клієнта із сервером СКБД PostgreSQL, використовуючи параметри зазамовчуванням.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/8d3b5718-5974-49a5-b031-5c3afe7ac6ad)

2.5.5 Зупинити сервер СКБД PostgreSQL.

### 6 Керування обмеженням використання ресурсів ОС

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/8d223283-322c-41d2-ad19-6ae46965fd51)

2.6.1 Встановити з’єднання із віртуальною машиною, яка створена у розділі 2.1., через SSH-команду від імені користовувача, створеного під час інсталяції віртуальної ОС.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/a3317931-0825-48fe-8e24-e4ea95ddb2b6)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/2befab9b-cbe7-4a26-87a9-9d22add75a01)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/d8051f63-2ac7-47d0-ae9b-d423e710604c)

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/5c23299f-c884-488d-b79c-2785266a406b)
