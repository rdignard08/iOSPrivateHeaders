
@protocol NSCoding, NSCopying;
@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {

    double location;
}
 + (void) initialize;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (BOOL) isColorStop;
 - (BOOL) isOpacityStop;
 - (id) initWithLocation:(double)a;
 - (void) setLocation:(double)a;
 - (BOOL) isDoubleStop;
 - (double) location;


@end
