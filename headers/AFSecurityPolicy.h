
@interface AFSecurityPolicy : NSObject {

    BOOL _validatesCertificateChain;
    BOOL _allowInvalidCertificates;
    BOOL _validatesDomainName;
    unsigned long long _SSLPinningMode;
    NSArray* _pinnedCertificates;
    NSArray* _pinnedPublicKeys;
}
@property (nonatomic, assign, readwrite) NSNumber* SSLPinningMode;
@property (nonatomic, assign, readwrite) NSNumber* validatesCertificateChain;
@property (nonatomic, retain, readwrite) NSArray* pinnedCertificates;
@property (nonatomic, assign, readwrite) NSNumber* allowInvalidCertificates;
@property (nonatomic, assign, readwrite) NSNumber* validatesDomainName;
@property (nonatomic, retain, readwrite) NSArray* pinnedPublicKeys;
 + (id) defaultPolicy;
 + (id) defaultPinnedCertificates;
 + (id) policyWithPinningMode:(unsigned long long)a;
 + (id) keyPathsForValuesAffectingPinnedPublicKeys;

 - (void) setSSLPinningMode:(unsigned long long)a;
 - (void) setPinnedCertificates:(id)a;
 - (void) setValidatesCertificateChain:(BOOL)a;
 - (unsigned long long) SSLPinningMode;
 - (void) setValidatesDomainName:(BOOL)a;
 - (id) pinnedCertificates;
 - (void) setPinnedPublicKeys:(id)a;
 - (BOOL) evaluateServerTrust:(^{__SecTrust=})aforDomain:(id)b;
 - (BOOL) validatesDomainName;
 - (BOOL) allowInvalidCertificates;
 - (BOOL) validatesCertificateChain;
 - (id) pinnedPublicKeys;
 - (BOOL) evaluateServerTrust:(^{__SecTrust=})a;
 - (void) setAllowInvalidCertificates:(BOOL)a;
 - (void) .cxx_destruct;
 - (id) init;


@end
