5 * fact 4  = 120
    4 * fact 3;  = 24
        3 * fact 2; = 6
            2 * fact 1 =2
                    return 1; 


5! = return 5 * fact(4) = 5*24 = 120
    4! = return 4 * fact(3) = 4 * 6 = 24
        3! = return 3 * fact(2) = 3 * 2 = 6
            2! = return 2 * fact(1) = 2 * 1 = 2
                1! = return 1


fact(0)
fact(1)
fact(2)
fact(3)
fact(4)
fact(5)
main()  


saydigit(0) return 
saydigit(4)
saydigit(43)
saydigit(432)
main()

1 + getsum(3-9) size 4 = 28
    3 + getsum(7-9) size 3 = 27
        7 + getsum(8-9) size 2 = 24
            8 + getsum(9) size 1 = 17
                9 + getsum(garbage??) size 0 =9
                    return 0



aleen =a
leen =l
een =e
en = e
n = n
return

2^5
2 * power(2, 4) = 32
    2 * power(2, 3) = 16
        2 * power(2, 2) = 8
            2 * power(2,1) = 4
                return 2


2^9 (using more optimized way)
2 * power(2, 4) * power(2, 4) = 2* 16 * 16 = 256
    power(2, 2) * power(2, 2) = 4 * 4 = 16 
        power(2, 1) * power(2, 1) = 2*2 = 4 
            return 2

2^11 = 2 * 32 * 32 = 2048
    2^5 = 2 * 4 * 4 = 32 (coz in odd we return a*power()*power())
        2^2 = 2*2 = 4 (coz in even, we return power() * power())
            2^1 = 2
                return 2