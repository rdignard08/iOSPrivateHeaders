
@interface UISliderContent : NSObject {

    @"UIImage" thumb;
    @"UIImage" minTrack;
    @"UIImage" maxTrack;
}
@property (nonatomic, retain, readwrite) UIImage* thumb;
@property (nonatomic, retain, readwrite) UIImage* minTrack;
@property (nonatomic, retain, readwrite) UIImage* maxTrack;
@property (nonatomic, assign, readonly) NSNumber* isEmpty;

 - (void) dealloc;
 - (BOOL) isEmpty;
 - (id) thumb;
 - (void) setThumb:(id)a;
 - (id) minTrack;
 - (void) setMinTrack:(id)a;
 - (id) maxTrack;
 - (void) setMaxTrack:(id)a;


@end
