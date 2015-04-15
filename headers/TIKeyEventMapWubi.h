
@interface TIKeyEventMapWubi : TIKeyEventMapChinese {

}
 + (BOOL) supportsSecureCoding;

 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(unsigned long long)ckeyboardState:(id)d;
 - (id) wubiFromASCII:(id)a;
 - (BOOL) isNumericWubi:(id)a;


@end
