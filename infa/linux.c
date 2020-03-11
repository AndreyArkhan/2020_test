dpkg -l|grep -i nano

Важное значение для APT (как и для других подобных СУП) является файл с описанием источников хранилищ, т. е. репозиториев. 
Для APT это файл /etc/apt/sources.list. 
Если этот файл настроен и содержит верную информацию об источниках, 
то нужно перед каждыми обновлениями или установками приложений выполнять команду:

$ apt-get update

для обновления информации о пакетах. После чего можно проводить установку/обновление:

$ apt-get install имя пакета

$ apt-get remove имя


---
Установка из исходников позволяет получить более свежую версию.
Обновление бинарных инсталляторов, как правило, немного отстаёт, 
хотя в последнее время разница не столь существенна.

--
apt-get (системы на базе Debian) Ubuntu например
---

флешки положено в /media/ монтировать, точнее создавать там новый каталог, 
и монтировать к нему. Имя каталога обычно берётся из volue lable, 
а если ты его не удосужился забить, то UUID.

Монтирование осуществляет файловый менеджер, часть DE.

Можно ручками смонтировать, но по умолчанию это может сделать только root. 
Имя самого устройства можно узнать командой dmesg.


ls -l
---

????
label для флешки указать

Разделы диска и файловая система

таблица разделов. Она может быть двух типов - GPT или MBR. 
там находится метка раздела, его порядковый номер и адрес начала и конца на жестком диске.

Дальше больше. Чтобы на каждом разделе можно было работать с файлами и каталогами, 
необходима файловая система. Мы могли бы писать просто содержимое файлов на диск, 
но нужно еще где-то хранить данные о папках, имена файлов, их размер, 
адрес на жестком диске, атрибуты доступа. Всем этим занимается файловая система.

-----

Информация о разделах 
sudo fdisk -l

sudo cfdisk
df -h
http://yournet.kz/blog/os/linux/9-komand-dlya-prosmotra-informacii-o-razdelax-i-diskax

--
last reboot
last -x | grep shutdown | head

who -b

man who
---
last -x | grep shutdown | head -1