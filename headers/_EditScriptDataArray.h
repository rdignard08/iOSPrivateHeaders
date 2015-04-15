
@protocol _EditScriptData;
@interface _EditScriptDataArray : NSObject <_EditScriptData> {

    @"NSArray" _data;
    @"NSString" _cachedStringValue;
}
@property (nonatomic, retain, readwrite) NSArray* data;
@property (nonatomic, retain, readwrite) NSString* cachedStringValue;
 + (id) EditScriptDataWithArray:(id)a;
 + (id) EditScriptDataWithString:(id)achunkSize:(q)b;

 - (id) description;
 - (void) dealloc;
 - (id) data;
 - (id) stringValue;
 - (id) initWithArray:(id)a;
 - (void) setData:(id)a;
 - (q) lengthOfItem:(q)a;
 - (q) characterIndexForItem:(q)a;
 - (q) indexOfFirstDifferenceWithOtherData:(id)ashouldReverseIterate:(BOOL)b;
 - (id) stringAtIndex:(q)a;
 - (void) setCachedStringValue:(id)a;
 - (id) initWithString:(id)achunkSize:(q)b;
 - (id) cachedStringValue;
 - (q) length;


@end
