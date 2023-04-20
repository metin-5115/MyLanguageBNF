alfabetik           a --- z (olsun)
büyük alfabetik     A --- Z (olsun)
digit               0 --- 9 (en ba?ta olmayacak)
özel karakterler    . ; / * (elendi)
dile ba?l? harfler    ö ç ? (elendi)




sayi1   (elendi)
int sayi1 (olsun)
 

int -> tms
float -> knd
string -> klm

---------- degisken isimlendirme ve tanimlama melek --------------


klm[boyutu] = liste


"/0"

klm test = |safak|

?afak -> "?", "a", "f", "a", "k", "/0"

---------- liste yazimi ve string mustafa --------------



ise x = 1 {
func(1)
func(2)
}          (olsun)

------------ while


// x degisebilir 

for i > 10 step k


------------------------------ donguler metin ---------------------------------------

if elif else

if asdfasdf == asdasfsf
   ** 
elif asdasa == jshayuofds
  **




main[] -> tms {

}

fonksiyon1[x, klm] -> klm {

return don
}

---------------------------- fonksiyon ve (elif ?afak) --------------

$ comment için $



$ yazan dusunsun
hata kontrolu yok $



$ islem onceligi yok $

degisken_tipx = degisken_tip1 + degisken_tip2  $ matematiksel islemlerde  $


OR  
AND
XOR
NOT

1 OR 0 = 1
1 AND 0 = 0
1 XOR 0 = 1

1 NOT OR 0 = 0
1 NOT AND 0 = 1
1 NOT XOR 0 = 0


NOT 0 AND 0 = 1 AND 0 = 0 $ NOT gördü?ü ilk ifadeyi tersine cevirir $

NOT (0 AND 0) = NOT 0 = 1 $ dogru yaz?m? $

------------------- geri kalan can -------------------------------


*** Program?n Ba?lamas? ***



main[] -> tms {
	

	*** De?i?ken Tan?mlamas? ***
	tms a = 10;
	tms b = 20;


	*** Fonksiyondan gelen de?erin kullan?lmas? ***

    tms sonuc = toplama[a,b];

	*** iken sözdizimi: Kontrol edilen ifade do?ru olmayana kadar blok içine girilir. ***

	tms x = 0;
	iken sonuc != 1 {
		x = x + 1;
		sonuc = sonuc - 1;
	}

	*** for sözdizimi: Verilen de?erden ba?lar di?er de?ere kadar step artarak gider. ***
	
	tms x = 0;

	for [i = 0: i < 10] step k {
		x = x + 13;
	}


	*** if elif else:

	if[a == b] {
		$ burada islemler $
	}
	elif[a == c] {
		$ burada islemler $
	}
	else {
		$ burada islemler $
	}


	*** liste sözdizimi ***
	klm[5] isim_listesi = (|isimler0|, |isimler1|, |isimler2|, |isimler3|, |isimler4|);
	tms[5] sayi_listesi = (0, 1, 2, 3, 4);


	return 0;
	}

*** fonksiyon tan?mlanmas?: fonksiyon böyle tan?mlan?r. ()!main'in d???nda tan?mlan?r(!)  ***

toplama[tms x, tms y] -> tms {

	return x+y;

}
***************************** BNF *****************************
----------------- TANIMLAMA ------------------------------
<Rakam> -> 0 | 1 | ... | 9

<pozitif sayi> -> <Rakam> | <pozitif sayi><Rakam>

<sayi> -> - <pozitif sayi> | <pozitif sayi> | <Rakam>

<Buyuk_Harf> -> A | B | ... | Z

<Kucuk_Harf> -> a | b | ... | z

<karakter> -> <Harf> | <sayi>

<Bool> -> True | False

<Kosul> -> <ifade> <Kosul_Operatoru> <ifade> | <ifade>

<ifade> -> <Etiket> | <Bool> | <if yapisi> | <ifade> | <iken> | <fonksiyon cagrisi> | <for döngüsü> | <islem> | <Kosul> | <atama> | <fonksiyon atama> | <liste atama> | <ifade>;<ifade> | <ifade>; | <veri tipi> <Etiket> | return <ifade>;

<Kosul_Operatoru> -> == | != | < | > | <= | >= 

<Alfanumerik> -> <Harf> | <Rakam>

<Harf> -> <Kucuk_Harf> | <Buyuk_Harf>

<metin> -> "|"<karakter>"|" | "|"<metin><karakter>"|"

<aritmetik operator> -> + | - | * | /

<islem> -> <ifade><aritmetik operator><ifade> | <ifade>

<veri tipi> -> tms | klm | knd

<Etiket> -> <Harf> | <Etiket> <Harf> | <Etiket> <Rakam>
------------ LiSTE VE ATAMALAR -----------------------------
<atama> -> <veri tipi> <Etiket> = <Etiket> | <veri tipi> <Etiket> = <sayi> | <veri tipi> <Etiket> = <metin> | <veri tipi> <Etiket> = <fonksiyon cagrisi>

<liste atama> -> <veri tipi> [] <Etiket> 

<liste> -> (<sayi> | <metin> | <Etiket>)
------------- IF YAPISI ------------------

<if yapisi> -> if [ <Kosul> ] { <ifade> } elif [ <Kosul> ] { <ifade> } else { <ifade> } | if [ <Kosul> ] { <ifade> } else { <ifade> }

----------- FONKSIYON ----------------

<fonksiyon cagrisi> -> <Etiket> [ <parametre listesi> ]

<fonksiyon atama> -> <Etiket> [ <parametre listesi> ] -> <veri tipi> { <ifade> }

<parametre listesi> -> <ifade> | <ifade> , <parametre listesi>
----------IKEN ---------

<iken> -> iken  <Kosul> { <ifade> }
-------- FOR -----------------

<for döngüsü> -> for [ <baslangic> ; <Kosul> ] step <sayi> { <ifade> }

<baslangic> -> tms <Etiket> = <sayi>

***************************** KOD TÜRETME *****************************

<fonksiyon atama> -> <Etiket> [ <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> main[ <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> main[] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> main[] -> tms { <ifade> }
<fonksiyon atama> -> main[] -> tms {<ifade>;<ifade>}
<fonksiyon atama> -> main[] -> tms {<atama>;<ifade>}
<fonksiyon atama> -> main[] -> tms {<veri tipi> <Etiket> = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms <Etiket> = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms <Harf> = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms <Kucuk_Harf> = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = <pozitif sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = <pozitif sayi><Rakam>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = <Rakam><Rakam>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 1<Rakam>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;<atama>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;<veri tipi> <Etiket> = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms <Etiket> = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms <Harf> = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms <Kucuk_Harf> = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = <sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = <pozitif sayi>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = <pozitif sayi><Rakam>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = <Rakam><Rakam>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 3<Rakam>;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;<ifade>}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;<ifade>;}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;<atama>;}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;<veri tipi> <Etiket> = <fonksiyon cagrisi>;}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms <Etiket> = <fonksiyon cagrisi>;}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = <fonksiyon cagrisi>;}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = <Etiket> [ <parametre listesi> ];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = <Harf> [ <parametre listesi> ];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = <Buyuk_Harf> [ <parametre listesi> ];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[ <parametre listesi> ];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[<ifade> , <parametre listesi>];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[<Etiket> , <parametre listesi>];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[<Harf> , <parametre listesi>];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[<Kucuk_Harf> , <parametre listesi>];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[a , <parametre listesi>];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[a , <ifade>];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[a , <Etiket>];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[a , <Harf>];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[a , <Kucuk_harf>];}
<fonksiyon atama> -> main[] -> tms {tms a = 12;tms b = 35;tms c = D[a , b];}

<fonksiyon atama> -> <Etiket> [ <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ <ifade> , <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ <veri tipi> <Etiket>, <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms <Etiket>, <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms <Harf>, <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms <Kucuk_Harf>, <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms a, <parametre listesi> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms a, <ifade> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms a, <veri tipi> <Etiket> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms a, tms <Etiket> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms a, tms <Harf> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms a, tms <Kucuk_Harf> ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms a, tms b ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms a, tms b ] -> <veri tipi> { <ifade> }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { <ifade> }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { <ifade> }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { <if yapisi> }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ <Kosul> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ <ifade> <Kosul_Operatoru> <ifade> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ <Etiket> <Kosul_Operatoru> <ifade> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ <Harf> <Kosul_Operatoru> <ifade> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ <Kucuk_Harf> <Kosul_Operatoru> <ifade> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <Kosul_Operatoru> <ifade> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= <ifade> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= <Etiket> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= <Harf> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= <Kucuk_Harf> ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { <ifade> } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return <ifade>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return <islem>;} else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return <ifade><aritmetik operator><ifade>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return <Etiket><aritmetik operator><ifade>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return <Harf><aritmetik operator><ifade>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return <Kucuk_Harf><aritmetik operator><ifade>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a<aritmetik operator><ifade>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*<ifade>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*<Etiket>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*<Harf>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*<Kucuk_Harf>; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { <ifade> } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return <ifade>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return <islem>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return <ifade><aritmetik operator><ifade>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return <Etiket><aritmetik operator><ifade>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return <Harf><aritmetik operator><ifade>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return <Kucuk_Harf><aritmetik operator><ifade>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return b<aritmetik operator><ifade>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return b*<ifade>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return b*<Etiket>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return b*<Harf>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return b*<Kucuk_Harf>; } }
<fonksiyon atama> -> D[ tms a, tms b ] -> tms { if [ a <= b ] { return a*a; } else { return b*b; } }

***************************** KOD *****************************

main[] -> tms {
	tms a = 12;
	tms b = 35;
	tms c = D[a, b];
}
D[tms a,tms b] -> tms {
	if(a<=b){
		return a*a;
	}
	else{
		return b*b;
	}
}







