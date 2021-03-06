/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraVideoTierParameters : NSObject <HMFLogging, NSSecureCoding> {
    HMDCameraVideoTier * _currentPickedTier;
    HMDCameraVideoTier * _firstPickedTier;
    HMDCameraSessionID * _sessionID;
    NSArray * _tierOrder;
    NSDictionary * _videoTierCombinations;
}

@property (nonatomic, retain) HMDCameraVideoTier *currentPickedTier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDCameraVideoTier *firstPickedTier;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tierOrder;
@property (nonatomic, readonly) NSDictionary *videoTierCombinations;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_generateAllVideoTiers:(id)arg1;
- (id)currentPickedTier;
- (void)encodeWithCoder:(id)arg1;
- (id)firstPickedTier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1 streamingCapabilities:(id)arg2;
- (id)logIdentifier;
- (BOOL)pickHigherTier;
- (BOOL)pickLowerTier;
- (id)sessionID;
- (void)setCurrentPickedTier:(id)arg1;
- (void)setFirstPickedTier:(id)arg1;
- (void)setTierOrder:(id)arg1;
- (id)tierOrder;
- (void)updateFirstPickedTier:(id)arg1;
- (void)updateTierOrder:(id)arg1;
- (void)updateTierParameters:(id)arg1 firstPickedParameter:(id)arg2;
- (id)videoTierCombinations;

@end
