CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 0;
	rq = 0;
	tid = 23;
	title = 2302;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 100;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 2309;
				ctype = 1;
				idx = 5061201;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 2308;
				gtype = 1;
				area = 2301;
				goal = 2304;
				grade = 132203;
				rwd = 100;
				scitem = -1;
				sort = 2305;
				stype = 2;
				taid = 1;
				title = 2302;
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 2307;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckPCRace
			{
				raceflg = 1;
			}
			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 4;
			}
			CDboTSClickNPC
			{
				npcidx = "5061201;";
			}
			CDboTSCheckClrQst
			{
				flink = 1;
				flinknextqid = "24;";
				not = 0;
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;1;252;";
			type = 0;
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 2308;
			gtype = 1;
			oklnk = 2;
			area = 2301;
			goal = 2304;
			sort = 2305;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 2302;
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "100;";
			type = 1;
		}
		CDboTSContGAct
		{
			cid = 252;
			elnk = 255;
			nextlnk = 253;
			prelnk = "2;";
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 2314;
			nextlnk = 254;
			rwdexp = 0;
			rwdtbl = 2301;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = "8032101;";
			}
		}
	}
}

