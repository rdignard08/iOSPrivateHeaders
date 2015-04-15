
@interface _CUIThemeFacetCacheKey : NSObject {

    [16{_renditionkeytoken="identifier"S"value"S}] keyList;
    long long themeIndex;
    unsigned long long hashPrecalc;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (unsigned long long) hash64;
 - (id) initWithKeyList:(r^{_renditionkeytoken=SS})a themeIndex:(long long)b ;


@end
