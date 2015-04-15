
@interface UIKBCacheToken_Key : UIKBCacheToken {

    (?="styling"{?="idiom"b6"landscape"b1"split"b1"appearance"b8"rendering"b16}"intValue"i) _style;
    @"NSString" _cacheDisplayString;
    i _displayTypeHint;
    i _displayRowHint;
    {CGSize="width"d"height"d} _size;
    i _state;
    i _clipCorners;
    BOOL _usesInsets;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _displayInsets;
}
 + (id) tokenForKey:(id)astyle:({?=b6b1b1b8b16})b;
 + (id) tokenForKey:(id)astyle:({?=b6b1b1b8b16})bdisplayInsets:({UIEdgeInsets=dddd})c;

 - ({CGSize=dd}) size;
 - (void) dealloc;
 - (id) string;
 - (BOOL) hasKey;
 - (id) stringForRenderFlags:(q)alightKeyboard:(BOOL)b;
 - (i) rowHint;
 - (void) setRowHint:(i)a;
 - (i) displayHint;
 - (void) setDisplayHint:(i)a;
 - (id) _initWithKey:(id)astyle:({?=b6b1b1b8b16})bdisplayInsets:({UIEdgeInsets=dddd})c;
 - (id) _stringWithAdditionalValues:(@?)a;
 - (void) setSize:({CGSize=dd})a;


@end
