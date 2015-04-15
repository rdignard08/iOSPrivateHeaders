
@protocol ImageRowReading;
@interface CIImageRowReader : NSObject <ImageRowReading> {

    unsigned long long height;
    unsigned long long width;
    unsigned long long bpr;
    ^v data;
    short red;
    short green;
    short blue;
    short alpha;
    ^{CGColorSpace=} cs;
}
 + (id) forImage:(id)ausingContext:(id)b;
 + (id) fromImage:(^{CGImage=})a;
 + (id) forImage:(id)adownscaleToMax:(unsigned int)bcolorspace:(^{CGColorSpace=})c;
 + (id) forImage:(id)adownscaleToMax:(unsigned int)bcolorspace:(^{CGColorSpace=})cusingContext:(id)d;
 + (id) forImage:(id)ausingContext:(id)bcolorspace:(^{CGColorSpace=})c;
 + (id) fromImageFile:(id)a;
 + (id) forImage:(id)adownscaleToMax:(unsigned int)b;
 + (id) withDictionary:(id)a;

 - (void) dealloc;
 - (id) init;
 - (short) red;
 - (short) green;
 - (short) blue;
 - (short) alpha;
 - (void) _dumpImage:(id)a colorspace:(^{CGColorSpace=})b ;
 - (r*) rowAtIndex:(unsigned int)a ;
 - (unsigned int) bytesPerPixel;
 - (void) dumpImage:(id)a ;
 - (void) dumpImageAsDeviceRGB:(id)a ;
 - (void) dumpImageAsDict:(id)a ;
 - (unsigned long long) width;
 - (unsigned long long) height;


@end
