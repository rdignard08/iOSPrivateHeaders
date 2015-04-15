
@protocol _EditScriptData;
@interface _EditScriptDataArray : NSObject <_EditScriptData> {

    @"NSArray" _data;
    @"NSString" _cachedStringValue;
}
@property (nonatomic, retain, readwrite) NSArray* data;
@property (nonatomic, retain, readwrite) NSString* cachedStringValue;
 + (id) EditScriptDataWithArray:(id)a;
 + (id) EditScriptDataWithString:(id)achunkSize:(long long)b;

 - (id) description;
 - (void) dealloc;
 - (id) data;
 - (id) stringValue;
 - (id) initWithArray:(id)a;
 - (void) setData:(id)a;
 - (long long) lengthOfItem:(long long)a;
 - (long long) characterIndexForItem:(long long)a;
 - (long long) indexOfFirstDifferenceWithOtherData:(id)ashouldReverseIterate:(BOOL)b;
 - (id) stringAtIndex:(long long)a;
 - (void) setCachedStringValue:(id)a;
 - (id) initWithString:(id)achunkSize:(long long)b;
 - (id) cachedStringValue;
 - (long long) length;


@end
