
@interface CIFilterClassDescription : NSObject {

    NSMutableDictionary attributes;
    NSArray inputKeys;
    NSArray outputKeys;
}
 + (id) classDescriptionForClass:(Class)a;

 - (id) attributes;
 - (id) inputKeys;
 - (id) outputKeys;
 - (id) initWithClass:(Class)a;


@end
