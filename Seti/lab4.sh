#!/bin/bash

function cop_in_cront {
crontab -l &> laba4;
t1=`grep "no crontab" laba4`;
t=`whoami`;
t2=`echo "no crontab for $t"`;
if [ "$t1" = "$t2" ]
then
echo "$m $h * * * tar cf $p$archive.tar $c"  ***Резервнаякопия*** > laba4;
crontab laba4;
else
echo "$m $h * * * tar cf $p$archive.tar $c"  ***Резервнаякопия*** >> laba4;
crontab laba4;
fi
}

 function wdd {
	crontab -l &> laba4;
t1=`grep "no crontab" laba4`;
t=`whoami`;
t2=`echo "no crontab for $t"`;
if [ "$t1" = "$t2" ]
then
echo "$m $h * * * dd if=$w$c of=$p$c"  ***Резервнаякопия*** > laba4;
crontab laba4;
else
echo "$m $h * * * tar cf $p$archive.tar $c"  ***Резервнаякопия*** >> laba4;
crontab laba4;
fi
} 

function cop {
#echo "Откуда копировать?";
read w;
echo "Что копировать?";
read c;
echo "Куда копировать?";
echo "Введите путь:";
read p;
echo "Имя архива:";
read archive;
echo "Когда копировать?";
echo "Введите время в формате час минута (через пробел)";
read h m;
crontab laba4;

cop_in_cront;
}


function show_cop {
crontab -l &> laba4;
grep ***Резервнаякопия*** laba4 | cut -d " " -f  2,1;
}

 function new_cop {
echo "Введите время создания резервной копии, которое хотите измнеить";
read h m;
sed -i "s!$m $h.*!deletethis!" laba4;
sed -i '/deletethis/d' laba4;
crontab laba4;
echo "Введите время создания новой резервной копии";
read h m;
crontab laba4;
cop_in_cront;
}

function delite_cop {
echo "Введите время создания резервной копии, которую хотите удалить";
read h m;
sed -i "s!$m $h.*!deletethis!" laba4;
sed -i '/deletethis/d' laba4;
crontab laba4;
cop_in_cront;

}
 

function menu {
echo "1-Создать резервную копию";
echo "2-Просмтр резервных копий";
echo "3-Удаление резервного копированя";
echo "4-Редактирование резервного копирования";
read n;
if [[ n -eq 1 ]]; then
cop;
menu;
elif [[ n -eq 2 ]]; then
show_cop;
menu;
elif [[ n -eq 3 ]]; then
delite_cop;
menu;
elif [[ n -eq 4 ]]; then
new_cop;
menu;
fi
}
menu;
