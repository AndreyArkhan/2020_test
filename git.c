sudo apt install git

git@github.com:AndreyArkhan/2020_test.git

git clone git@github.com:AndreyArkhan/2020_test.git

git commit -m "Initial Commit" -a

git config --global user.email "den_nedelin@mail.ru"
git config --global user.name "AndreyArkhan"

коммитить всё:
 git commit -m "Initial Commit" -a

Команде необходимо передать два параметра, 
первый - это -m, ваш комментарий, 
второй -a, означает, что нужно применить действие ко всем измененным файлам. 
Для первого раза используется этот параметр, но обычно вам нужно указать 
измененные файлы или каталоги. Например, можно делать так:

git commit -m "Changed file" file
---
Сначала нужно добавить удаленный репозиторий с помощью команды remote.
git remote add origin https://github.com/AndreyArkhan/2020_test.git

--
Затем можно посмотреть список удаленных репозиториев:
git remote -v

--
git push origin master
Команда push указывает, что нужно отправить данные в удаленный репозиторий, 
origin - наш настроенный репозиторий, а master - ветвь.

инфа о ветках:
git branch -a 

создать ветку develop
git checkout -b develop

переключение между ветками 
git checkout master
git checkout develop