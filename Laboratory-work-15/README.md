## Основи контейнерної віртуалізації програмного забезпечення

## 1 Встановлення програми контейнерної віртуалізації Docker

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/1a0d7989-4c52-4388-87c7-528ed87db68b)

2.1.1 На вашому локальному комп’ютері встановити програмне забезпечення Docker під будь-яку host-ОС (Windows, Linux, MacOS).

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/03f776e9-82cc-4fc8-8ed2-9fde1cf35757)

2.1.2 Перевірити успішність встановлення Docker через запуск контейнера на основі тестового образу hello-world.

## 2 Керування контейнерною віртуалізацією ОС Linux через інтерфейс командного рядку

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/5221a4d9-cce7-4eae-a041-1091eab91b18)

Рис 3 - 2.2.1 Через командний рядок виконати пошук контейнернего образу ОС Linux.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/771b0af9-f241-48a6-9cdc-ff35f64f66fb)

Рис 4 - 2.2.2 Отримати перелік версій контейнерного образу ОС fedora, назва яких містить тільки цифри.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/eb39577d-b592-4fb2-b02f-66b8e18801ae)

Рис 5 - 2.2.3 Завантажити контейнерний образ ОС fedora версії, номер якої відповідає останнім цифрам вашої групи, наприклад, 21, 22, 23.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/f4497a2c-0b08-42a9-aa60-1243deb6e8e6)

Рис 6 - 2.2.4 Запустити контейнер з образом, завантаженим у попередньому пункті, який має назву «fedora-for-surname», де surname – ваше прізвище транслітерацією, наприклад «fedora-for-blazhko», для подальшої взамодії з користовучем через команду bash.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/fbd9243e-bc5e-4921-a4f8-a5caceed1b29)

Рис 7 - 2.2.5 Після отримання доступу до терміналу ОС переглянути опис дистрибутиву ОС.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/53a42040-f82d-4b92-b405-cfea89325b01)

Рис 8 - 2.2.6 В другому псевдотерміналі host-ОС виконати команду отримання списку запущених контейнерів.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/cfc94b4d-e80a-45a3-8c03-896a4d2f2d9e)

Рис 9 - 2.2.7 В першому псевдотерміналі завершити роботу із контейнером.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/2b44a45b-49e8-4efe-a66c-bd323f2ef45f)

Рис 10 - 2.2.8 В другому псевдотерміналі host-ОС виконати команду отримання списку створених контейнерів.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/73405e79-3d40-427a-bd63-3e7ef53ced75)

Рис 11 - 2.2.9 Видалити створений контейнер.

### 3 Керування файловою віртуалізацією ОС Linux через команду chroot

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/11deec4a-27d8-4d48-aaf1-d80c038f9ea4)

Рис 12 - 2.3.1 Створити каталог за шаблоном /tmp/surname_root, де surname – ваше прізвище транслітерацією, наприклад, /tmp/blazhko_root

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/056f78b9-5143-4f5b-8c02-dbe97f5749b5)

Рис 13 - 2.3.2 Розмістити у створеному каталозі програму bash та всі необхідні файли динамічних бібліотек.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/70fd2ff5-0c93-478a-9bea-846889bdfab4)

Рис 14 - 2.3.3 Змінити розташування root-каталогу на створений каталог.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/b6d029b0-bc34-4291-a748-686dca3d9bb5)

Рис 15 - 2.3.4 Спробувати змінити каталог на каталог поточного користувача.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/e3997411-043d-4212-8a75-ebe29e07e0f8)

Рис 16 - 2.3.5 Отримати назву поточного каталогу.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/6a9a2a5f-da2e-4a64-9bd7-5fff8de6cb3c)

Рис 17 - 2.3.6 Змінити значення змінної HOME на назву поточного каталогу.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/d9f214ff-dd9f-4438-8cb6-01c81cc68dbe)

Рис 18 - 2.3.7 Змінити каталог на каталог поточного користувача.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/b2994ef5-731c-4b3e-860f-46d2d7c435dd)

Рис 19 - 2.3.8 Спробувати виконати команду отримання переліку файлів каталогу.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/830a78ef-c20c-4273-9918-942fd3e127af)

Рис 20 - 2.3.9 Повернутися до старого root-каталогу.

### 4 Керування контейнерною віртуалізацією СКБД PostgreSQL через інтерфейс командного рядку

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/dc2b55d2-2a8c-4a3d-9698-5b9fd8315ea4)

Рис 21 -  2.4.1 Завантажити образ контейнера postgres останньої стабільної версії.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/f317bd27-e02f-4932-b078-c4ba4b137705)

Рис 22 - 2.4.2. Запустити образ postgres зі створенням контейнеру з назвою за шаблоном
«surname-postgres», де surname – ваше прізвище транслітерацією, паролем адміністратора 5432 та подальшою роботою сервера СКБД PostgreSQL у фоновому режимі

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/666d6956-d73b-4221-b59d-b801845a3fe9)

Рис 23 - 2.4.3 Виконати в контейнері surname-postgres команду bash, щоб розпочати роботу із оболонкою командного рядку.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/3aba9008-3c4d-4691-ac63-3503dcbb582e)

Рис 24 - 2.4.4 В оболонці командного рядку створити БД із назвою за шаблоном «surname_db»

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/598ec475-f48d-42e0-bc07-21563f795949)

Рис 25 - 2.4.5 В оболонці командного рядку створити користувача СКБД PostgreSQL за шаблоном «surname».

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/82ee29ad-cb5c-4122-aee0-971c074f21c4)

Рис 26 - 2.4.6 В оболонці командного рядку встановити з’єднання зі створеною БД від імені створеного користувача.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/3681b98a-82f7-4a39-874a-c5c54294184c)

Рис 27 - 2.4.7 Завершити роботу з командою psql та завершити роботу з контейнером.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/e4f24bd4-8363-4471-84b9-b11d7232d35e)

Рис 28 - 2.4.8 Виконати команду отримання списку запущених контейнерів.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/0cd215c2-f3a2-425e-9383-73ba6eecc2dc)

Рис 29 - 2.4.9 Зупинити роботу контейнера surname-postgres.

![image](https://github.com/oleksandrblazhko/ai222-sverdan/assets/127392871/82747d13-b27a-4a51-9a39-a8586c0edd84)

Рис 30 - 2.4.10 Видалити контейнер surname-postgres.
