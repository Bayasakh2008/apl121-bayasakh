'''
START 
DECLARE i, minDay AS Integer
DECLARE c,f,minC AS REAL
DECLARE level,ClothingTip AS String
minC=10
minDay=0
FOR i=1 TO 7
    INPUT c
    f=c*1.8+32
    IF c>=0 THEN
        level = "Dulaan"
        ClothingTip="Nimgen,hungun huvtsas"
    ELSE IF c>=-15 THEN 
        level= "Huiten"
        ClothingTip= "Nimgen kurtik"
    ELSE IF c>=-30 THEN
        level="Mash huiten"
        ClothingTip="Zuzaan kurtik,malgai,oroolt,beelii"
    ELSE 
        level="Tas huiten"
        ClothingTip="Mash zuzaan huvtsas"
    END IF
    OUTPUT i & "-r udur: " & c & "C=" & f & "F, " & level & ", " & ClothingTip
    IF c<minC THEN
        minC=c
        minDay=i
    END IF
END FOR
OUTPUT "Hamgiin huiten udur: " & minDay & "-r udur, " & minC & "C"
END
'''
