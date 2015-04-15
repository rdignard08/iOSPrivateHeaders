
@interface CUIPSDLayer : NSObject {

    double _opacity;
    int _blendMode;
    @"NSString" _name;
}
@property (nonatomic, assign, readwrite) NSNumber* opacity;
@property (nonatomic, assign, readwrite) NSNumber* blendMode;
@property (nonatomic, retain, readwrite) NSString* name;

 - (void) dealloc;
 - (id) name;
 - (id) init;
 - (void) setName:(id)a;
 - (int) blendMode;
 - (void) setBlendMode:(int)a;
 - (double) opacity;
 - (void) setOpacity:(double)a;


@end
