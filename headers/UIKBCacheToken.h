
@protocol NSCopying;
@interface UIKBCacheToken : NSObject <NSCopying> {

    @"NSMutableArray" _components;
    @"NSString" _name;
    d _scale;
    i _emptyFields;
    q _renderFlags;
}
@property (nonatomic, assign, readonly) NSString* string;
@property (nonatomic, assign, readwrite) NSNumber* size;
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, assign, readwrite) NSNumber* rowHint;
@property (nonatomic, assign, readwrite) NSNumber* displayHint;
@property (nonatomic, assign, readwrite) NSNumber* renderFlags;
@property (nonatomic, assign, readwrite) NSNumber* emptyFields;
@property (nonatomic, assign, readonly) NSNumber* hasKey;
 + (id) tokenForKeyplane:(id)a;
 + (id) tokenForKey:(id)astyle:({?=b6b1b1b8b16})b;
 + (id) tokenForKeyMask:(id)astyle:({?=b6b1b1b8b16})bdisplayInsets:({UIEdgeInsets=dddd})c;
 + (id) tokenForKey:(id)astyle:({?=b6b1b1b8b16})bdisplayInsets:({UIEdgeInsets=dddd})c;
 + (id) tokenTemplateForKey:(id)aname:(id)bstyle:(i)csize:({CGSize=dd})d;
 + (id) tokenTemplateFilledForKey:(id)astyle:(i)bsize:({CGSize=dd})c;
 + (id) tokenTemplateForKey:(id)astyle:(i)bsize:({CGSize=dd})c;

 - ({CGSize=dd}) size;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) string;
 - (id) name;
 - (id) initWithName:(id)a;
 - (i) emptyFields;
 - (BOOL) hasKey;
 - (id) stringForKey:(id)astate:(i)b;
 - (id) stringForSplitState:(BOOL)a;
 - (id) stringForRenderFlags:(q)alightKeyboard:(BOOL)b;
 - (q) renderFlags;
 - (id) initWithComponents:(id)aname:(id)b;
 - (i) _writeString:(id)atoStr:(*)bmaxLen:(i)c;
 - (i) _writeNumber:(f)atoStr:(*)b;
 - (i) _writeEdgeInsets:({UIEdgeInsets=dddd})atoStr:(*)bmaxLen:(i)c;
 - (i) _writeArray:(id)atoStr:(*)bmaxLen:(i)c;
 - (id) stringForConstruction:(@?)a;
 - (id) stringForComponentArray:(id)aadditionalValues:(@?)b;
 - (i) rowHint;
 - (void) setRowHint:(i)a;
 - (i) displayHint;
 - (void) setDisplayHint:(i)a;
 - (void) setEmptyFields:(i)a;
 - (void) setRenderFlags:(q)a;
 - (void) setName:(id)a;
 - (void) setSize:({CGSize=dd})a;
 - (id) stringForState:(i)a;


@end
