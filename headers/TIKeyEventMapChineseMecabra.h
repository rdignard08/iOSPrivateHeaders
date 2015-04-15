
@interface TIKeyEventMapChineseMecabra : TIKeyEventMapChinese {

}
 + (BOOL) supportsSecureCoding;
 + (id) inlineNumbersAndPunctuationSet;

 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(unsigned long long)ckeyboardState:(id)d;


@end
