.code
dmul	r1, r1, r2   ; Estructural dmul de varios ciclos 
dmul	r2, r2, r3   ; (lo q pongas en simulador -1)
ori  	r4, r0, 20   ; r4 = 20
daddi 	r4, r5, 14
dadd 	r6, r1, r3   ; (Evita la estructural porq no dos mem a la vez con la raw)
and  	r4, r6, r1   ; RAW de dos ciclos con r6
xor  	r7, r7, r7   ; r7 = 0
nop

xor   r10, r10, r10
daddi r20 , r20, 50
xor   r11, r11, r11