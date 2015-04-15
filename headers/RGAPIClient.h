
@interface RGAPIClient : AFHTTPSessionManager {

    @"NSURLSessionConfiguration" _sessionConfiguration;
    @"<RGSerializationDelegate>" _serializationDelegate;
}

 - (id) initWithBaseURL:(id)asessionConfiguration:(id)b;
 - (id) sessionConfiguration;
 - (id) serializationDelegate;
 - (id) parseResponse:(id)aatPath:(id)bintoClass:(Class)ccontext:(N^@)d;
 - (id) responseObjectFromBody:(id)akeypath:(id)bclass:(Class)ccontext:(id)derror:(id)e;
 - (void) GET:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcontext:(id)ecompletion:(@?)f;
 - (void) GET:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcontext:(id)edelegate:(id)f;
 - (void) request:(id)aurl:(id)bparameters:(id)ckeyPath:(id)dclass:(Class)ecompletion:(@?)fdelegate:(id)gcontext:(id)h;
 - (void) POST:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcontext:(id)ecompletion:(@?)f;
 - (void) POST:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcontext:(id)edelegate:(id)f;
 - (void) PUT:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcontext:(id)ecompletion:(@?)f;
 - (void) PUT:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcontext:(id)edelegate:(id)f;
 - (void) DELETE:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcontext:(id)ecompletion:(@?)f;
 - (void) DELETE:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcontext:(id)edelegate:(id)f;
 - (void) GET:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcompletion:(@?)e;
 - (void) GET:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)ddelegate:(id)e;
 - (void) POST:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcompletion:(@?)e;
 - (void) POST:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)ddelegate:(id)e;
 - (void) PUT:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcompletion:(@?)e;
 - (void) PUT:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)ddelegate:(id)e;
 - (void) DELETE:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)dcompletion:(@?)e;
 - (void) DELETE:(id)aparameters:(id)bkeyPath:(id)cclass:(Class)ddelegate:(id)e;
 - (void) setSerializationDelegate:(id)a;
 - (void) GET:(id)aparameters:(id)bclass:(Class)ccompletion:(@?)d;
 - (void) GET:(id)akeyPath:(id)bclass:(Class)ccompletion:(@?)d;
 - (void) GET:(id)aclass:(Class)bcompletion:(@?)c;
 - (void) POST:(id)aparameters:(id)bclass:(Class)ccompletion:(@?)d;
 - (void) POST:(id)akeyPath:(id)bclass:(Class)ccompletion:(@?)d;
 - (void) POST:(id)aclass:(Class)bcompletion:(@?)c;
 - (void) PUT:(id)aparameters:(id)bclass:(Class)ccompletion:(@?)d;
 - (void) PUT:(id)akeyPath:(id)bclass:(Class)ccompletion:(@?)d;
 - (void) PUT:(id)aclass:(Class)bcompletion:(@?)c;
 - (void) DELETE:(id)aparameters:(id)bclass:(Class)ccompletion:(@?)d;
 - (void) DELETE:(id)akeyPath:(id)bclass:(Class)ccompletion:(@?)d;
 - (void) DELETE:(id)aclass:(Class)bcompletion:(@?)c;
 - (void) GET:(id)acompletion:(@?)b;
 - (void) GET:(id)adelegate:(id)b;
 - (void) POST:(id)acompletion:(@?)b;
 - (void) POST:(id)adelegate:(id)b;
 - (void) PUT:(id)acompletion:(@?)b;
 - (void) PUT:(id)adelegate:(id)b;
 - (void) DELETE:(id)acompletion:(@?)b;
 - (void) DELETE:(id)adelegate:(id)b;
 - (void) .cxx_destruct;
 - (id) init;
 - (id) initWithBaseURL:(id)a;


@end
