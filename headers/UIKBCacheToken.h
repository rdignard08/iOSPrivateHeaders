
@protocol NSCopying;
@interface UIKBCacheToken : NSObject <NSCopying> {

    NSMutableArray* _components;
    NSString* _name;
    double _scale;
    int _emptyFields;
    long long _renderFlags;
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
 + (id) tokenTemplateForKey:(id)aname:(id)bstyle:(int)csize:({CGSize=dd})d;
 + (id) tokenTemplateFilledForKey:(id)astyle:(int)bsize:({CGSize=dd})c;
 + (id) tokenTemplateForKey:(id)astyle:(int)bsize:({CGSize=dd})c;

 - ({CGSize=dd}) size;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (id) string;
 - (id) name;
 - (id) initWithName:(id)a ;
 - (int) emptyFields;
 - (BOOL) hasKey;
 - (id) stringForKey:(id)a state:(int)b ;
 - (id) stringForSplitState:(BOOL)a ;
 - (id) stringForRenderFlags:(long long)a lightKeyboard:(BOOL)b ;
 - (long long) renderFlags;
 - (id) initWithComponents:(id)a name:(id)b ;
 - (int) _writeString:(id)a toStr:(char*)b maxLen:(int)c ;
 - (int) _writeNumber:(float)a toStr:(char*)b ;
 - (int) _writeEdgeInsets:({UIEdgeInsets=dddd})a toStr:(char*)b maxLen:(int)c ;
 - (int) _writeArray:(id)a toStr:(char*)b maxLen:(int)c ;
 - (id) stringForConstruction:(@?)a ;
 - (id) stringForComponentArray:(id)a additionalValues:(@?)b ;
 - (int) rowHint;
 - (void) setRowHint:(int)a ;
 - (int) displayHint;
 - (void) setDisplayHint:(int)a ;
 - (void) setEmptyFields:(int)a ;
 - (void) setRenderFlags:(long long)a ;
 - (void) setName:(id)a ;
 - (void) setSize:({CGSize=dd})a ;
 - (id) stringForState:(int)a ;


@end
