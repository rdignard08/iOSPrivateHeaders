
@interface _NSActivityAssertion : NSObject {

    long long _ended;
    unsigned long long _options;
    NSString* _reason;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher>* _voucher;
    NSObject<OS_voucher>* _previousVoucher;
    <NSObject>* _xpcBoost;
    BKSProcessAssertion* _processAssertion;
    @? _expirationHandler;
}
 + (void) _performActivityWithOptions:(unsigned long long)areason:(id)busingBlock:(@?)c;
 + (void) _performExpiringActivityWithReason:(id)ausingBlock:(@?)b;
 + (id) _expiringAssertionManagementQueue;
 + (id) _expiringActivities;
 + (id) _expirationHandlerExecutionQueue;
 + (void) _expireAllActivies;
 + (id) _expiringTaskExecutionQueue;
 + (void) _dumpExpiringActivitives;

 - (id) _initWithActivityOptions:(unsigned long long)a reason:(id)b expirationHandler:(@?)c ;
 - (void) _end;
 - (void) _reactivate;
 - (void) _fireExpirationHandler;
 - (void) dealloc;
 - (id) debugDescription;


@end
