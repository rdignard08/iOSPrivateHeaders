
@protocol ImageRowReading;
@interface CIImageRowReader : NSObject <ImageRowReading> {

    Q height;
    Q width;
    Q bpr;
    ^v data;
    s red;
    s green;
    s blue;
    s alpha;
    ^{CGColorSpace=} cs;
}
 + (id) forImage:(id)ausingContext:(id)b;
 + (id) fromImage:(^{CGImage=})a;
 + (id) forImage:(id)adownscaleToMax:(I)bcolorspace:(^{CGColorSpace=})c;
 + (id) forImage:(id)adownscaleToMax:(I)bcolorspace:(^{CGColorSpace=})cusingContext:(id)d;
 + (id) forImage:(id)ausingContext:(id)bcolorspace:(^{CGColorSpace=})c;
 + (id) fromImageFile:(id)a;
 + (id) forImage:(id)adownscaleToMax:(I)b;
 + (id) withDictionary:(id)a;

 - (void) dealloc;
 - (id) init;
 - (s) red;
 - (s) green;
 - (s) blue;
 - (s) alpha;
 - (void) _dumpImage:(id)acolorspace:(^{CGColorSpace=})b;
 - (r*) rowAtIndex:(I)a;
 - (I) bytesPerPixel;
 - (void) dumpImage:(id)a;
 - (void) dumpImageAsDeviceRGB:(id)a;
 - (void) dumpImageAsDict:(id)a;
 - (Q) width;
 - (Q) height;


@end
