
@interface UIWebOptGroup : NSObject {

    <UIWebSelectedItemPrivate>* _group;
    NSArray* _options;
    long long _offset;
}
@property (nonatomic, assign, readonly) NSNumber* offset;
@property (nonatomic, retain, readwrite) NSNumber* group;
@property (nonatomic, retain, readwrite) NSArray* options;

 - (void) dealloc;
 - (void) setGroup:(id)a;
 - (id) initWithGroup:(id)aitemOffset:(long long)b;
 - (id) group;
 - (void) setOptions:(id)a;
 - (id) options;
 - (long long) offset;


@end
