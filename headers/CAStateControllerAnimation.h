
@interface CAStateControllerAnimation : NSObject {

    @"CALayer" _layer;
    @"NSString" _key;
}
@property (nonatomic, assign, readonly) CALayer* layer;
@property (nonatomic, assign, readonly) NSString* key;

 - (void) dealloc;
 - (id) key;
 - (id) initWithLayer:(id)akey:(id)b;
 - (id) layer;


@end
