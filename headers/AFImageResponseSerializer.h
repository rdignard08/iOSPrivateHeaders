
@interface AFImageResponseSerializer : AFHTTPResponseSerializer {

    BOOL _automaticallyInflatesResponseImage;
    double _imageScale;
}

 - (id) responseObjectForResponse:(id)adata:(id)berror:(^@)c;
 - (void) setImageScale:(double)a;
 - (void) setAutomaticallyInflatesResponseImage:(BOOL)a;
 - (BOOL) automaticallyInflatesResponseImage;
 - (double) imageScale;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
