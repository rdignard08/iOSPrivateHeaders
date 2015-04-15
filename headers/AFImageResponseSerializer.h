
@interface AFImageResponseSerializer : AFHTTPResponseSerializer {

    BOOL _automaticallyInflatesResponseImage;
    d _imageScale;
}

 - (id) responseObjectForResponse:(id)adata:(id)berror:(^@)c;
 - (void) setImageScale:(d)a;
 - (void) setAutomaticallyInflatesResponseImage:(BOOL)a;
 - (BOOL) automaticallyInflatesResponseImage;
 - (d) imageScale;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
