## Складна обробка текстових даних засобами оболонки Unix-подібних ОС інтерпретора команд ОС

### №1 Пошук у системних файлах Git-репозиторію.

![image](https://user-images.githubusercontent.com/127392871/229879765-996ff5ee-fda8-47d3-b075-b989d59a04b0.png)

Рис. 1 - Фрагмент екрану з рішенням завдання 2.1.1 "Вивести на екран перелік каталогів та файлів поточного каталогу, а також всіх файлів з підкаталогів (рекомендується використати команду find)"

![image](https://user-images.githubusercontent.com/127392871/229880190-2b8e291b-de77-4de5-8a39-96277e84b24e.png)

Рис. 2 - Фрагмент екрану з рішенням завдання 2.1.2 "Вивести на екран перелік каталогів або файлів поточного каталогу, назви яких починаються з цифри та завершуються цифрою, а в середині – будь-які символи (рекомендується використати команду find)"

![image](https://user-images.githubusercontent.com/127392871/229880931-f45269ca-9e73-4c43-934f-37220a14c6a6.png)

Рис. 3 - Фрагмент екрану з рішенням завдання 2.1.3 "Вивести на екран перелік каталогів або файлів, назви яких мають підрядок з не менше ніж трьох цифр (рекомендується використати конвеєр команд find та grep)"

![image](https://user-images.githubusercontent.com/127392871/229881837-8a0abca7-3b13-463c-92c1-60028529e2ae.png)

Рис. 4 - Фрагмент екрану з рішенням завдання 2.1.4 "Повторити виконання попереднього завдання, але лише для назв файлів або назв каталогів, які відокремлено один від одного (рекомендується використати конвеєр команди find та ланцюжка команд «tr, sort, grep» для трансформації назв каталогів та файлів як це було у попередній лабораторній роботі)"

![image](https://user-images.githubusercontent.com/127392871/229882402-298ae0c8-b800-4fe8-b29b-022f4091bf8f.png)

Рис. 5 - Фрагмент екрану з рішенням завдання 2.1.5 "Вивести на екран перелік файлів, назви яких мають лише цифри (рекомендується використати конвеєр команд find, tr, sort, grep)"

![image](https://user-images.githubusercontent.com/127392871/229882738-80932b78-1559-4b05-a288-61f96672d65b.png)

Рис. 6 - Фрагмент екрану з рішенням завдання 2.1.6 "Вивести на екран перелік файлів, назви яких мають лише символи, які пов’язані з шістнадцятирічними цифрами, наприклад, 0-9 та a-f (рекомендується використати конвеєр команд find, tr, sort, grep)"

![image](https://user-images.githubusercontent.com/127392871/229883583-802697b5-f3ed-437d-b5df-bba6d95a81b2.png)

Рис. 7 - Фрагмент екрану з рішенням завдання 2.1.7 "Вивести на екран рядок, в якому може зберігатися підрядок з коментарем для для команди commit, який починається зі слова «Changed», при цьому потік помилок необхідно перенаправити до спеціального фіктивного пристрою /dev/null (рекомендується використати лише команду grep */* з шаблоном пошуку файлів у каталогах дворівневої глибини)"

![image](https://user-images.githubusercontent.com/127392871/229885009-8721d7c4-1c91-406f-83f2-d8ee852911eb.png)

Рис. 8 - Фрагмент екрану з рішенням завдання 2.1.8 "Вивести на екран рядок, в якому може зберігатися підрядок з електронною поштовою скринькою облікового запису Git-користувача, який виконував команду commit,при цьому необхідно використати шаблон регулярного виразу, який забезпечить  пошук будь- яких інших подібних поштових скриньок (рекомендується використати лише команду grep */* з шаблоном пошуку файлів у каталогах дворівневої глибини)"

### №2 Складний пошук та заміна текстових даних.

![image](https://user-images.githubusercontent.com/127392871/229891493-59ca0714-0df5-4e62-8c8c-36e19791ce65.png)

Рис. 9 - Фрагмент екрану з рішенням завдання 2.2.1"З отриманого каталогу вивести на екран рядки файлів, в яких є рядок з підрядком з номером вашого варіанту завдання, наприклад, Варіант 0 (рекомендується використати команду grep)"

![image](https://user-images.githubusercontent.com/127392871/229891748-9703fe7a-410b-4214-83ec-806a01eb0cc0.png)

Рис. 10 - Фрагмент екрану з рішенням завдання 2.2.2"Модифікувати рішення попереднього завдання, вивівши на екран лише назву файлу без зайвої інформації про рядок файлу (рекомендується використати конвеєр команд grep, sed)"

![image](https://user-images.githubusercontent.com/127392871/229893952-6fe570ef-8502-4144-a6cc-68632e680062.png)

Рис. 11 - Фрагмент екрану з рішенням завдання 2.2.3"Скопіювати знайдений файл у каталог «Laboratory-work-4» Git-репозиторія, використовуючи команду cp. Перейти до каталогу «Laboratory-work-4»"

![image](https://user-images.githubusercontent.com/127392871/229894945-360e02a0-59b1-4d89-b0da-8c44f3937973.png)

Рис. 12 - Фрагмент екрану з рішенням завдання 2.2.4"Вивести на екран вміст знайденого файлу без порожніх рядків (рекомендується використати в подальшому команду sed)"

![image](https://user-images.githubusercontent.com/127392871/229895965-05e2494d-2c1e-42f5-be37-fab64f200601.png)

Рис. 13 - Фрагмент екрану з рішенням завдання 2.2.5"Вивести на екран рядки із словами-дублікатами (однакові слова, які йдуть один за одним)"

![image](https://user-images.githubusercontent.com/127392871/229896197-8f5e6fc9-1dc6-404e-b091-afbe81ce09b9.png)

Рис. 14 - Фрагмент екрану з рішенням завдання 2.2.6"У файлі HTML-формату є рядки з html-тегами <td> та цілами числами. Вивести на екран ці рядки, перетворюючи цілі числа у числа з плаваючою комою, додавши до підрядка з числом підрядок .00, наприклад, підрядок «10» буде перетворено на «10.00»"

![image](https://user-images.githubusercontent.com/127392871/229896426-67a4f53a-04dd-43cd-b7ac-e37e61e7abcc.png)

Рис. 15 - Фрагмент екрану з рішенням завдання 2.2.7"У файлі є рядки з html-тегами <td>, які замість чисел містять символи-
роздільники (дефіс, відсоток, три крапки). Вивести на екран ці рядки, перетворюючи символи-роздільники на символи прогалини (space)"

![image](https://user-images.githubusercontent.com/127392871/229897793-c14e0bb3-3704-49a2-b0a7-dc0261a03013.png)

Рис. 16 - Фрагмент екрану з рішенням завдання 2.2.8"У файлі є підрядки зі словом "Об'єкт". Вивести на екран це слово, замінившийого перший символ на символ, який є у верхньому регістрі, на символ у нижньому регістрі"

### №3 Автоматизована модифікація файлів з текстовими даними.

![image](https://user-images.githubusercontent.com/127392871/229906738-248d373a-2cd5-4f85-a5df-8ab46916366f.png)

Рис. 17 - Фрагмент екрану з рішенням завдання 2.3.1"У файлі є рядок з html-тегом <title>. Видалити з цього рядка цифри, які розміщено наприкінці рядка"

![image](https://user-images.githubusercontent.com/127392871/229907578-f63145ef-83ad-446e-adf8-5c60537aea01.png)

Рис. 18 - Фрагмент екрану з рішенням завдання 2.3.2"У файлі є рядок з html-тегом <title>. Додати після цього рядка новий рядок, який містить наступне: "h1Таблиця оновлено автоматично. Автор - ПІБ, група /h1" (рекомендується додати за номером, який заздалегіть визначено попердньою командою sed наприклад, після 4-го рядку)"

![image](https://user-images.githubusercontent.com/127392871/229907889-8978aadc-5559-40b3-8021-ea27eb3b2455.png)

Рис. 19 - Фрагмент екрану з рішенням завдання 2.3.3"Видалити з файлу всі порожні рядки"

![image](https://user-images.githubusercontent.com/127392871/229909110-423b3699-a459-4b00-9ea4-4836682d155f.png)

Рис. 20 - Фрагмент екрану з рішенням завдання 2.3.4"Видалити з файлу слова-дублікати"

![image](https://user-images.githubusercontent.com/127392871/230078151-95c9b079-1791-491c-bde7-753d843ee594.png)

Рис. 21 - Фрагмент екрану з рішенням завдання 2.3.5"Об’єднати команди SED, створені у попередніх завданнях, в окремий текстовий файл з назвою за шаблоном surname.sed, де surname – ваше прізвище латинськими літерами. Виконати утиліту SED з читанням команд зі створенного файлу"
