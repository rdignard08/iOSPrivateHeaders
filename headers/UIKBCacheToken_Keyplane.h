
@interface UIKBCacheToken_Keyplane : UIKBCacheToken {

    {CGSize="width"d"height"d} _size;
    (?="styling"{?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16}"intValue"i) _style;
    @"NSString" _geometrySetName;
    @"NSString" _keySetName;
}
 + (id) tokenForKeyplane:(id)a;

 - (void) dealloc;
 - (id) stringForSplitState:(BOOL)a;
 - (id) _initWithKeyplane:(id)akeylayout:(id)b;


@end
