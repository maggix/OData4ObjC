/**
*
*Copyright 2010 OuterCurve Foundation
*
*Licensed under the Apache License, Version 2.0 (the "License");
*you may not use this file except in compliance with the License.
*You may obtain a copy of the License at
*
*http://www.apache.org/licenses/LICENSE-2.0
*
*Unless required by applicable law or agreed to in writing, software
*distributed under the License is distributed on an "AS IS" BASIS,
*WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*See the License for the specific language governing permissions and
*limitations under the License.
*/
/**
* This code was generated by the tool 'odatagen'.
* Runtime Version:1.0
*
* Changes to this file may cause incorrect behavior and will be lost if
* the code is regenerated.
*/
/**
* Defines default Data Service URL for this proxy class
*/
#define DEFAULT_SERVICE_URL @""


#define DataServiceVersion @"1.0"

#import "ODataObject.h"
#import "ObjectContext.h"
#import "DataServiceQuery.h"
#import "ODataGUID.h"
#import "ODataBool.h"
#import  "mProperties.h"


/**
 * @interface:CityCrime
 * @Type:EntityType
 
 * @key:ROWID* 
 */
@interface data_gov_Crimes_CityCrime : ODataObject
{
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_ROWID;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.String
	* @MaxLength:
	* @FixedLength:
	*/
	NSString *m_State;
	
	/**
	* @Type:EntityProperty
	* @EdmType:Edm.String
	* @MaxLength:
	* @FixedLength:
	*/
	NSString *m_City;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Year;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Population;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_ViolentCrime;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_MurderAndNonEgligentManslaughter;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_ForcibleRape;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Robbery;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_AggravatedAssault;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_PropertyCrime;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Burglary;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_LarcenyTheft;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_MotorVehicleTheft;
	
	/**
	* @Type:EntityProperty
	* NotNullable
	* @EdmType:Edm.Int32
	*/
	NSNumber *m_Arson;
	
}

@property ( nonatomic , retain , getter=getROWID , setter=setROWID: )NSNumber *m_ROWID;
@property ( nonatomic , retain , getter=getState , setter=setState: ) NSString *m_State;
@property ( nonatomic , retain , getter=getCity , setter=setCity: ) NSString *m_City;
@property ( nonatomic , retain , getter=getYear , setter=setYear: )NSNumber *m_Year;
@property ( nonatomic , retain , getter=getPopulation , setter=setPopulation: )NSNumber *m_Population;
@property ( nonatomic , retain , getter=getViolentCrime , setter=setViolentCrime: )NSNumber *m_ViolentCrime;
@property ( nonatomic , retain , getter=getMurderAndNonEgligentManslaughter , setter=setMurderAndNonEgligentManslaughter: )NSNumber *m_MurderAndNonEgligentManslaughter;
@property ( nonatomic , retain , getter=getForcibleRape , setter=setForcibleRape: )NSNumber *m_ForcibleRape;
@property ( nonatomic , retain , getter=getRobbery , setter=setRobbery: )NSNumber *m_Robbery;
@property ( nonatomic , retain , getter=getAggravatedAssault , setter=setAggravatedAssault: )NSNumber *m_AggravatedAssault;
@property ( nonatomic , retain , getter=getPropertyCrime , setter=setPropertyCrime: )NSNumber *m_PropertyCrime;
@property ( nonatomic , retain , getter=getBurglary , setter=setBurglary: )NSNumber *m_Burglary;
@property ( nonatomic , retain , getter=getLarcenyTheft , setter=setLarcenyTheft: )NSNumber *m_LarcenyTheft;
@property ( nonatomic , retain , getter=getMotorVehicleTheft , setter=setMotorVehicleTheft: )NSNumber *m_MotorVehicleTheft;
@property ( nonatomic , retain , getter=getArson , setter=setArson: )NSNumber *m_Arson;

+ (id) CreateCityCrimeWithrowid:(NSNumber *)aROWID year:(NSNumber *)aYear population:(NSNumber *)aPopulation violentcrime:(NSNumber *)aViolentCrime murderandnonegligentmanslaughter:(NSNumber *)aMurderAndNonEgligentManslaughter forciblerape:(NSNumber *)aForcibleRape robbery:(NSNumber *)aRobbery aggravatedassault:(NSNumber *)aAggravatedAssault propertycrime:(NSNumber *)aPropertyCrime burglary:(NSNumber *)aBurglary larcenytheft:(NSNumber *)aLarcenyTheft motorvehicletheft:(NSNumber *)aMotorVehicleTheft arson:(NSNumber *)aArson;
- (id) init;
- (id) initWithUri:(NSString*)anUri;
@end

/**
 * Container interface datagovCrimesContainer, Namespace: data.gov.Crimes
 */
@interface datagovCrimesContainer : ObjectContext
{
	 NSString *m_OData_etag;
	 DataServiceQuery *m_CityCrime;
	
}

@property ( nonatomic , retain , getter=getEtag , setter=setEtag: )NSString *m_OData_etag;
@property ( nonatomic , retain , getter=getCityCrime , setter=setCityCrime: ) DataServiceQuery *m_CityCrime;

- (id) init;
- (id) initWithUri:(NSString*)anUri credential:(id)acredential;
- (id) citycrime;
- (void) addToCityCrime:(id)anObject;

@end
