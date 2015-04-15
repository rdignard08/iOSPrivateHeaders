
@interface UIPasteboard : NSObject {

    NSString* _name;
}
@property (nonatomic, copy, readwrite) NSString* string;
@property (nonatomic, copy, readwrite) NSArray* strings;
@property (nonatomic, copy, readwrite) NSURL* URL;
@property (nonatomic, copy, readwrite) NSArray* URLs;
@property (nonatomic, copy, readwrite) UIImage* image;
@property (nonatomic, copy, readwrite) NSArray* images;
@property (nonatomic, copy, readwrite) UIColor* color;
@property (nonatomic, copy, readwrite) NSArray* colors;
@property (nonatomic, assign, readonly) NSString* name;
@property (nonatomic, assign, readwrite, getter=isPersistent) NSNumber* persistent;
@property (nonatomic, assign, readonly) NSNumber* changeCount;
@property (nonatomic, assign, readonly) NSNumber* numberOfItems;
@property (nonatomic, copy, readwrite) NSArray* items;
 + (id) _findPasteboard;
 + (id) _printPasteboard;
 + (id) pasteboardWithName:(id)acreate:(BOOL)b;
 + (id) pasteboardWithUniqueName;
 + (void) removePasteboardWithName:(id)a;
 + (id) generalPasteboard;

 - (long long) changeCount;
 - (void) dealloc;
 - (id) string;
 - (id) name;
 - (void) setString:(id)a ;
 - (void) setColors:(id)a ;
 - (id) images;
 - (id) items;
 - (id) valueForPasteboardType:(id)a ;
 - (BOOL) containsPasteboardTypes:(id)a inItemSet:(id)b ;
 - (void) setImages:(id)a ;
 - (id) _initWithName:(id)a system:(BOOL)b create:(BOOL)c ;
 - (void) setData:(id)a forPasteboardType:(id)b ;
 - (id) pasteboardTypesForItemSet:(id)a ;
 - (void) _pasteboardChanged:(id)a ;
 - (void) _addItems:(id)a oldPasteboardTypes:(id)b ;
 - (id) pasteboardTypes;
 - (BOOL) containsPasteboardTypes:(id)a ;
 - (id) dataForPasteboardType:(id)a ;
 - (void) setValue:(id)a forPasteboardType:(id)b ;
 - (id) itemSetWithPasteboardTypes:(id)a ;
 - (BOOL) isPersistent;
 - (void) setPersistent:(BOOL)a ;
 - (void) setStrings:(id)a ;
 - (id) strings;
 - (void) setURLs:(id)a ;
 - (id) URLs;
 - (id) init;
 - (id) URL;
 - (void) setURL:(id)a ;
 - (void) setImage:(id)a ;
 - (void) setColor:(id)a ;
 - (id) color;
 - (id) colors;
 - (id) image;
 - (void) addItems:(id)a ;
 - (void) setItems:(id)a ;
 - (long long) numberOfItems;
 - (id) dataForPasteboardType:(id)a inItemSet:(id)b ;
 - (id) valuesForPasteboardType:(id)a inItemSet:(id)b ;


@end
