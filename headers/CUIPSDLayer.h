
@interface CUIPSDLayer : NSObject {

    d _opacity;
    i _blendMode;
    @"NSString" _name;
}
@property (nonatomic, assign, readwrite) NSNumber* opacity;
@property (nonatomic, assign, readwrite) NSNumber* blendMode;
@property (nonatomic, retain, readwrite) NSString* name;

 - (void) dealloc;
 - (id) name;
 - (id) init;
 - (void) setName:(id)a;
 - (i) blendMode;
 - (void) setBlendMode:(i)a;
 - (d) opacity;
 - (void) setOpacity:(d)a;


@end
