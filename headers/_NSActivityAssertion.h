
@interface _NSActivityAssertion : NSObject {

    q _ended;
    Q _options;
    @"NSString" _reason;
    I _systemSleepAssertionID;
    @"NSObject<OS_voucher>" _voucher;
    @"NSObject<OS_voucher>" _previousVoucher;
    @"<NSObject>" _xpcBoost;
    @"BKSProcessAssertion" _processAssertion;
    @? _expirationHandler;
}
 + (void) _performActivityWithOptions:(Q)areason:(id)busingBlock:(@?)c;
 + (void) _performExpiringActivityWithReason:(id)ausingBlock:(@?)b;
 + (id) _expiringAssertionManagementQueue;
 + (id) _expiringActivities;
 + (id) _expirationHandlerExecutionQueue;
 + (void) _expireAllActivies;
 + (id) _expiringTaskExecutionQueue;
 + (void) _dumpExpiringActivitives;

 - (id) _initWithActivityOptions:(Q)areason:(id)bexpirationHandler:(@?)c;
 - (void) _end;
 - (void) _reactivate;
 - (void) _fireExpirationHandler;
 - (void) dealloc;
 - (id) debugDescription;


@end
