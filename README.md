# C++ Works
##  bankv2.0
### -Genel Kurallar-
- Oyuncular emlakçı, yarışmacı, tarlacı, bankacı gibi meslekler seçer.
- Ay başı geldiğinde oyuncular maaş alır, tapusu varsa bankacıya göstererek gelirini alır, ev ve dükkanı yoksa kira öder ve tarlası için sulama parası alınır.
### -Gayrimenkul-
|           |Fiyat          |Kira     |
|-----------|---------------|---------|               
|1 Katlı    |   480(+5)     |    10   |
|2 Katlı    |   530(+5)     |    33   |
|3 Katlı    |   570(+5)     |    35   |
|Apartman   |   600(+5)     |    38   |
|Villa      |   650(+5)     |    41   |
|Yazlık     |   750(+10)    |    45   |
|Yalı       |   950(+10)    |    50   |
|Malikhane  |   1200(+15)   |    80   |
|Dükkan     |    390        |     8   |

//parantez içleri, emlakçının satış başına aldığı kar payıdır.
### -Tarlalar-

| Tarla     |Fiyat          |Gelir    |
|-----------|---------------|---------|               
|Buğday     |   480(+5)     |    10   |
|Arpa       |   530(+5)     |    33   |
|Tütün      |   570(+5)     |    35   |
|Patates    |   600(+5)     |    38   |
|Soğan      |   650(+5)     |    41   |
|Elma       |   750(+10)    |    45   |
|Zeytin     |   950(+10)    |    50   |
|Pamuk      |   1200(+15)   |    80   |  

//parantez içleri, tarlacının satış başına aldığı kar payıdır.
//sulama parası tarla başına 4 liradır.
### -Vade Hesabı Faiz Kuralı-
|Para Miktarı  | Faiz   |
|--------------|--------|
|100           |3       |
|200           |8       |      
|300           |12      |
|400           |17      |
|500           |23      |
|600           |28      |
|700           |33      |
|800           |38      |
|900           |43      |
|1000          |50      |

### -Borç Faiz Kuralı-
|Borç Miktarı  | Faiz   |
|--------------|--------|
|100           |10      |
|200           |30      |      
|300           |50      |
|400           |70      |
|500           |80      |
|600           |100     |
|700           |110     |
|800           |130     |
|900           |150     |
|1000          |190     |
