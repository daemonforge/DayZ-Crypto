class CfgPatches
{
	class Cryptocurrency_Items
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class cfgvehicles
{
	class Inventory_Base;
//---Cryptocurrency
	class Cryptocurrency_base: Inventory_Base
	{
		scope=0;
		displayName="Cryptocurrency";
		descriptionShort="Bitcoin, first released as open-source software in 2009, is the first decentralized cryptocurrency. Since the release of bitcoin, many other cryptocurrencies have been created.";
		model="Crypto\data\Cryptocurrency\Cryptocurrency.p3d";
		visibilityModifier=0.84999999;
		itemSize[]={1,1};
		rotationFlags=16;
		weight=50;
		marketSymbol="";
		pileCount=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsMaterials[]=
		{
			"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"Crypto\data\Cryptocurrency\data\Cryptocurrency_gold_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						{1.0, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin.rvmat" }},
						{0.69999999, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin.rvmat" }},
						{0.5,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin_damaged.rvmat"}},
						{0.30000001,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin_damaged.rvmat"}},
						{0.0,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin_ruined.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpShovel_Light
				{
					soundSet="pickUpShovelLight_SoundSet";
					id=796;
				};
				class pickUpShovel
				{
					soundSet="pickUpShovel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="shovel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Cryptocurrency_bitcoin: Cryptocurrency_base
	{
		scope=2;
		displayName="Bitcoin Token";
		marketSymbol="BTC";
	};
	class Cryptocurrency_ethereum: Cryptocurrency_base
	{
		scope=2;
		displayName="Ethereum Token";
		marketSymbol="ETH";
		hiddenSelectionsMaterials[]=
		{
			"Crypto\data\Cryptocurrency\data\Cryptocurrency_ethereum.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						{ 1.0, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_ethereum.rvmat" } },
						{ 0.69999999, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_ethereum.rvmat" } },
						{ 0.5, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_ethereum_damaged.rvmat" } },
						{ 0.30000001, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_ethereum_damaged.rvmat" } },
						{ 0.0, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_ethereum_ruined.rvmat" } }
					};
				};
			};
		};
	};
	class Cryptocurrency_litecoin: Cryptocurrency_base
	{
		scope=2;
		displayName="Litecoin Token";
		marketSymbol="LTC";
		hiddenSelectionsMaterials[]=
		{
			"Crypto\data\Cryptocurrency\data\Cryptocurrency_litecoin.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"Crypto\data\Cryptocurrency\data\Cryptocurrency_gold_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						{1.0,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_litecoin.rvmat"}},
						{0.69999999,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_litecoin.rvmat"}},
						{0.5,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_litecoin_damaged.rvmat"}},
						{0.30000001,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_litecoin_damaged.rvmat"}},
						{0.0,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_litecoin_ruined.rvmat"}}
					};
				};
			};
		};
	};
	class Cryptocurrency_ripple: Cryptocurrency_base
	{
		scope=2;
		displayName="Ripple Token";
		marketSymbol="XRP";
		hiddenSelectionsMaterials[]=
		{
			"Crypto\data\Cryptocurrency\data\Cryptocurrency_ripple.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"Crypto\data\Cryptocurrency\data\Cryptocurrency_gold_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						{1.0,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_ripple.rvmat"}},
						{0.69999999,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_ripple.rvmat"}},
						{0.5,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_ripple_damaged.rvmat"}},
						{0.30000001,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_ripple_damaged.rvmat"}},
						{0.0,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_ripple_ruined.rvmat"}}
					};
				};
			};
		};
	};

//---Cryptocurrency Pile
	class Cryptocurrency_Pile_base: Inventory_Base
	{
		scope=0;
		displayName="Pile of Cryptocurrency";
		descriptionShort="";
		model="Crypto\data\Cryptocurrency\CryptocurrencyPile.p3d";
		visibilityModifier=0.84999999;
		itemSize[]={3,3};
		rotationFlags=16;
		weight=300;
		hiddenSelections[]=
		{
			"zbytek"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						{1.0, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin.rvmat" }},
						{0.69999999, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin.rvmat" }},
						{0.5,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin_damaged.rvmat"}},
						{0.30000001,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin_damaged.rvmat"}},
						{0.0,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin_ruined.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class Cryptocurrency_Pile_bitcoin: Cryptocurrency_Pile_base
	{
		scope=2;
		displayName="Pile Of 50 Bitcoin Tokens";
		marketSymbol="BTC";
		pileCount=20;
	};
	class Cryptocurrency_Pile_ethereum: Cryptocurrency_Pile_base
	{
		scope=2;
		displayName="Pile Of 50 Ethereum Tokens";
		marketSymbol="ETH";
		pileCount=20;
	};
	class Cryptocurrency_Pile_litecoin: Cryptocurrency_Pile_base
	{
		scope=2;
		displayName="Pile Of 50 Litecoin Tokens";
		marketSymbol="LTC";
		pileCount=20;
	};
	class Cryptocurrency_Pile_ripple: Cryptocurrency_Pile_base
	{
		scope=2;
		displayName="Pile Of 50 Ripple Tokens";
		marketSymbol="XRP";
		pileCount=50;
	};

//---Crypocurrency Sack
	class Cryptocurrency_Sack_base: Inventory_Base
	{
		scope=2;
		displayName="Sack Of Cryptocurrency";
		descriptionShort="";
		model="Crypto\data\Cryptocurrency\CryptoBag.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsMaterials[]=
		{
			"Crypto\data\Cryptocurrency\data\SackClean.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						{1.0, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin.rvmat" }},
						{0.69999999, { "Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin.rvmat" }},
						{0.5,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin_damaged.rvmat"}},
						{0.30000001,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin_damaged.rvmat"}},
						{0.0,{"Crypto\data\Cryptocurrency\data\Cryptocurrency_bitcoin_ruined.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class Cryptocurrency_Sack_bitcoin: Cryptocurrency_Sack_base
	{
		scope=2;
		displayName="Sack Of 50 Bitcoin Tokens";
		marketSymbol="BTC";
		pileCount=20;
		hiddenSelectionsTextures[]=
		{
			"Crypto\data\Cryptocurrency\data\SackClean_CO.paa"
		};
	};
};