
@protocol NSCoding, NSCopying;
@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {

    d location;
}
 + (void) initialize;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (BOOL) isColorStop;
 - (BOOL) isOpacityStop;
 - (id) initWithLocation:(d)a;
 - (void) setLocation:(d)a;
 - (BOOL) isDoubleStop;
 - (d) location;


@end
