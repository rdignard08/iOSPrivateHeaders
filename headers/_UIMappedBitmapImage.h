
@interface _UIMappedBitmapImage : UIImage {

    @"NSData" _data;
}
 + (BOOL) supportsSecureCoding;
 + (void) initialize;

 - (void) dealloc;
 - (id) data;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) _configureImage:(id)a;
 - (void) setData:(id)a;
 - (void) _preheatBitmapData;


@end
